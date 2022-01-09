module rv32is(
    input 	clk,
	input 	rst,
	output [31:0] imemaddr,		//imem的地址
	input  [31:0] imemdataout,	//imem读取到的数据
	output 	imemclk,			//imem的时钟
	output [31:0] dmemaddr,		//dmem的地址
	input  [31:0] dmemdataout,	//dmem读取到的数据
	output [31:0] dmemdatain,	//需要写入dmem的数据
	output 	dmemrdclk,			//dmem读口时钟
	output	dmemwrclk,			//dmem写口时钟
	output [2:0] dmemop,		//3'b000:sb 3'b001:sh 3'b010://sw
	output	dmemwe,				//dmem写有效
	output reg [31:0] dbg_pc,	//当前完成的指令的PC
	output done,				//读取到Instr为0xdead10cc时认为程序结束
	output wb,					//当前周期是否有指令完成
	output [31:0] reg00, reg01, reg02, reg03, reg04, reg05, reg06, reg07,
				  reg08, reg09, reg10, reg11, reg12, reg13, reg14, reg15,
				  reg16, reg17, reg18, reg19, reg20, reg21, reg22, reg23,
				  reg24, reg25, reg26, reg27, reg28, reg29, reg30, reg31
);
	wire flush, block;
	assign flush = rst | M_flush;

	// always @(flush, block, M_Branch) begin
	// $display("flush, block: %h %h", flush, block);
	// $display("M_flush: %b", M_flush);
	// $display("M_Branch: %h", M_Branch);
	// end

	// Instruction Fetching
	wire [31:0] IF_PC, IF_snPC, IF_instr, inputPC;
	wire IF_valid, IF_ready;
	IF IF(
		.clk(clk), .rst(rst), .flush(flush), .block(block),
		.inputPC(inputPC),
		.imemaddr(imemaddr), .imemclk(imemclk), .imemdataout(imemdataout),
		.currentPC(IF_PC), .snPC(IF_snPC), .currentInstr(IF_instr),
		.in_valid(1'b1),
		.in_ready(IF_ready),
		.out_valid(IF_valid),
		.out_ready(ID_ready)
	);
	// always@(*)
	// $display("%h**", IF_PC);

	// wire isJump = (M_Branch != 3'b0 && M_Branch[2] == 0) ? 1 : 0;
	// wire isBranch = (M_Branch != 3'b0 && M_Branch[2] == 1) ? 1 : 0;
	wire PCselect = (M_Branch != 3'b0);
	// wire PCselect = isJump | (isBranch & M_zero);
	// always @(PCselect, M_Branch)
	// $display("M_Branch, M_zero, PCselect: %h %h %h", M_Branch, M_zero, PCselect);
	assign inputPC = (rst ? 32'h80000000 : (block ? IF_PC : (PCselect ? M_nextPC : IF_snPC)));

	// Instruction Decoding
	wire ID_valid, ID_ready;
	wire [31:0] ID_PC, ID_imm;
	wire [2:0] ID_Branch;
	wire [1:0] ID_ALUBSrc;
	wire [3:0] ID_ALUctr;
	wire [2:0] ID_MemOp;
	wire ID_RegWr, ID_MemtoReg, ID_ALUASrc, ID_MemWr;
	wire [31:0] ID_busa, ID_busb;
	wire [4:0] ID_rw;
	wire ID_done;
	ID ID(
		.clk(clk), .flush(flush | rst), .block(block),
		.in_instr(IF_instr), .in_PC(IF_PC),
		.in_RegWr(W_RegWr), .in_busw(W_busw), .in_rw(W_rw),

		.currentPC(ID_PC),
		.imm(ID_imm),
		.Branch(ID_Branch),
		.ALUBSrc(ID_ALUBSrc),
		.ALUctr(ID_ALUctr),
		.MemOp(ID_MemOp),
		.RegWr(ID_RegWr),
		.MemtoReg(ID_MemtoReg),
		.ALUASrc(ID_ALUASrc),
		.MemWr(ID_MemWr),

		.busa(ID_busa),
		.busb(ID_busb),
		.rw(ID_rw),
		.done(ID_done),

		.blk(block),

		.in_valid(IF_valid),
		.in_ready(ID_ready),
		.out_valid(ID_valid),
		.out_ready(EX_ready),

		.reg00(reg00), .reg01(reg01), .reg02(reg02), .reg03(reg03), .reg04(reg04), .reg05(reg05), .reg06(reg06), .reg07(reg07),
		.reg08(reg08), .reg09(reg09), .reg10(reg10), .reg11(reg11), .reg12(reg12), .reg13(reg13), .reg14(reg14), .reg15(reg15),
		.reg16(reg16), .reg17(reg17), .reg18(reg18), .reg19(reg19), .reg20(reg20), .reg21(reg21), .reg22(reg22), .reg23(reg23),
		.reg24(reg24), .reg25(reg25), .reg26(reg26), .reg27(reg27), .reg28(reg28), .reg29(reg29), .reg30(reg30), .reg31(reg31)
	);

	// always @(ID_busa, ID_busb)
	// $display("ID busa busb: %h %h", ID_busa, ID_busb);

	// Executing
	wire EX_valid, EX_ready;
	wire EX_zero, EX_done;
	wire [31:0] EX_PC, EX_result, EX_imm, EX_busa, EX_busb;
	wire [4:0] EX_rw;
	wire [2:0] EX_Branch, EX_MemOp;
	wire EX_RegWr, EX_MemtoReg, EX_MemWr;
	EX EX(
		.clk(clk), .flush(flush | rst),

		.in_busa(ID_busa),
		.in_busb(ID_busb),
		.in_rw(ID_rw),
		.in_PC(ID_PC),
		.in_imm(ID_imm),
		.in_Branch(ID_Branch),
		.in_ALUBSrc(ID_ALUBSrc),
		.in_ALUctr(ID_ALUctr),
		.in_MemOp(ID_MemOp),
		.in_RegWr(ID_RegWr),
		.in_MemtoReg(ID_MemtoReg),
		.in_ALUASrc(ID_ALUASrc),
		.in_MemWr(ID_MemWr),
		.in_done(ID_done),

		.zero(EX_zero),
		.busa(EX_busa),
		.busb(EX_busb),
		.result(EX_result),
		.currentPC(EX_PC),
		.Branch(EX_Branch),
		.MemOp(EX_MemOp),
		.RegWr(EX_RegWr),
		.MemtoReg(EX_MemtoReg),
		.MemWr(EX_MemWr),
		.imm(EX_imm),
		.rw(EX_rw),
		.done(EX_done),

		.in_valid(ID_valid),
		.in_ready(EX_ready),
		.out_valid(EX_valid),
		.out_ready(M_ready)
	);

	// Memory
	wire M_flush, M_valid, M_ready, M_done;
	wire M_MemToReg, M_RegWr, M_zero;
	wire [31:0] M_result;
	wire [4:0] M_rw;
	wire [31:0] M_Do, M_nextPC, M_PC;
	wire [2:0] M_Branch;
	M M(
		.clk(clk), .rst(rst), .flush(M_flush),
		.MemWr(EX_MemWr),
		.MemOp(EX_MemOp),
		.Branch(EX_Branch),
		.zero(EX_zero),
		.Di(EX_busb),
		.ALUout(EX_result),
		.imm(EX_imm),
		.currentPC(EX_PC),
		.busa(EX_busa),
		.MemtoReg(EX_MemtoReg),
		.RegWr(EX_RegWr),
		.Rd(EX_rw),
		.done(EX_done),

		.MemtoReg_o(M_MemToReg),
		.RegWr_o(M_RegWr),
		.Branch_o(M_Branch),
		.Rd_o(M_rw),
		.ALUout_o(M_result),
		.zero_o(M_zero),
		.Do(M_Do),
		.nextPC(M_nextPC),
		.done_o(M_done),
		.PC_o(M_PC),

		.dmemaddr(dmemaddr),
		.dmemdataout(dmemdataout),
		.dmemdatain(dmemdatain),
		.dmemrdclk(dmemrdclk),
		.dmemwrclk(dmemwrclk),
		.dmemop(dmemop),
		.dmemwe(dmemwe),

		.in_valid(EX_valid),
		.in_ready(M_ready),
		.out_valid(M_valid),
		.out_ready(W_ready)
	);

	// Writing Back
	wire W_ready, W_RegWr;
	wire [31:0] W_busw;
	wire [4:0] W_rw;
	WB WB(
		.clk(clk), .rst(rst), .flush(flush),

		.currentPC(M_PC),	
		.MemtoReg(M_MemToReg),
		.RegWr(M_RegWr),
		.done(M_done),
		.Rd(M_rw),
		.Do(M_Do),
		.ALUout(M_result),
		.Di(W_busw),
		.WE(W_RegWr),
		.Rw(W_rw),
		.wb(wb),
		.done_o(done),
		.PC_o(dbg_pc),

		.in_valid(M_valid),
		.in_ready(W_ready)
	);
endmodule