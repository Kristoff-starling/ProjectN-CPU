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
	output [31:0] reg00,		//寄存器堆
	output [31:0] reg01,
	output [31:0] reg02,
	output [31:0] reg03,
	output [31:0] reg04,
	output [31:0] reg05,
	output [31:0] reg06,
	output [31:0] reg07,
	output [31:0] reg08,
	output [31:0] reg09,
	output [31:0] reg10,
	output [31:0] reg11,
	output [31:0] reg12,
	output [31:0] reg13,
	output [31:0] reg14,
	output [31:0] reg15,
	output [31:0] reg16,
	output [31:0] reg17,
	output [31:0] reg18,
	output [31:0] reg19,
	output [31:0] reg20,
	output [31:0] reg21,
	output [31:0] reg22,
	output [31:0] reg23,
	output [31:0] reg24,
	output [31:0] reg25,
	output [31:0] reg26,
	output [31:0] reg27,
	output [31:0] reg28,
	output [31:0] reg29,
	output [31:0] reg30,
	output [31:0] reg31
);
	// PC
	reg [31:0] PC;
    reg [31:0] nextPC;
    always @(posedge clk) begin
        if (rst) PC <= 32'h80000000;
        else begin
			if (!done) PC <= nextPC;
		end
    end
	always @(negedge clk) begin
		dbg_pc <= PC;
	end
	// InstrMem
	assign imemaddr = nextPC;
	assign imemclk = clk;
	wire [31:0] instr; assign instr = imemdataout;	
	assign done = (rst == 1'b1 ? 0 : (instr == 32'hdead10cc) ? 1 : 0);
	// Signal Control	
	wire [2:0] ExtOp, Branch;
    wire [1:0] ALUBSrc;
    wire [3:0] ALUctr;
    wire [2:0] MemOp;
    wire RegWr, MemtoReg, ALUASrc, MemWr;
    CtrSignal CtrSignal (
        .op(instr[6:2]),
        .func3(instr[14:12]),
        .func7(instr[30]),
		.ban(done | rst),
        .ExtOp(ExtOp),
        .Branch(Branch),
        .ALUBSrc(ALUBSrc),
        .ALUctr(ALUctr),
        .RegWr(RegWr),
        .MemtoReg(MemtoReg),
        .MemOp(MemOp),
        .ALUASrc(ALUASrc),
        .MemWr(MemWr)
    );
	//InstrToImm
	wire [31:0] imm;
    InstrToImm InstrToImm (
        .instr(instr),
        .ExtOp(ExtOp),
        .imm(imm)
    );
	// Regfiles
	wire [31:0] busa, busb, busw;
    regfile regfile (
        .clk(clk),
        .ra(instr[19:15]),
        .rb(instr[24:20]),
        .we(RegWr),
        .busw(busw),
        .rw(instr[11:7]),
        .busa(busa),
        .busb(busb),
		.x0(reg00),
		.x1(reg01),
		.x2(reg02),
		.x3(reg03),
		.x4(reg04),
		.x5(reg05),
		.x6(reg06),
		.x7(reg07),
		.x8(reg08),
		.x9(reg09),
		.x10(reg10),
		.x11(reg11),
		.x12(reg12),
		.x13(reg13),
		.x14(reg14),
		.x15(reg15),
		.x16(reg16),
		.x17(reg17),
		.x18(reg18),
		.x19(reg19),
		.x20(reg20),
		.x21(reg21),
		.x22(reg22),
		.x23(reg23),
		.x24(reg24),
		.x25(reg25),
		.x26(reg26),
		.x27(reg27),
		.x28(reg28),
		.x29(reg29),
		.x30(reg30),
		.x31(reg31)
    );
	// ALU
	wire [31:0] ALUa, ALUb;
    assign ALUa = (ALUASrc == 1) ? dbg_pc : busa;
    assign ALUb = (ALUBSrc == 2'b00) ? busb : ((ALUBSrc == 2'b01) ? imm : 32'h00000004);
    wire zero; wire [31:0] ALUresult;
    ALU_RV32 ALU_RV32 (
        .da(ALUa),
        .db(ALUb),
        .aluctr(ALUctr),
        .zero(zero),
        .result(ALUresult)
    );
	// DataMem
	wire [31:0] dataout;
	assign dmemaddr = (ALUresult);
	assign dmemdatain = busb;
	assign dmemwe = (~rst & ~done & MemWr);
	assign dataout = dmemdataout;
	assign dmemrdclk = clk;
	assign dmemwrclk = clk;
	assign dmemop = MemOp;
	assign busw = (MemtoReg == 1) ? dataout : ALUresult;
	// NextAddr
	NextAddr NextAddr (
        .zero(zero),
		.rst(rst),
        .result0(ALUresult[0]),
        .Branch(Branch),
        .imm(imm),
        .currentPC(PC),
        .busa(busa),
        .nextPC(nextPC)
    );

	assign wb = ~rst;
endmodule
