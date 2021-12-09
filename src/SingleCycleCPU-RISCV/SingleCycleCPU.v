module SingleCycleCPU(
    input clk,
    input rst,
    output [31:0] nxtPC,
    output [31:0] alures,
    output reg done
);
    reg [31:0] PC;
    wire [31:0] nextPC;
    always @(negedge clk) begin
        if (rst) begin 
            PC <= 32'h00000000;
            done <= 0;
        end
        else if (!done) PC <= nextPC;
    end

    wire [31:0] instr;
    InstrMem InstrMem (
        .Addr(PC),
        .clk(clk),
        .instr(instr),
        .InstrMemEn(~rst),
        .InstrMemWr(rst)
    );

    always @(*) begin
        if (instr == 32'hdead10cc) done = 1; else done = 0;
    end

    wire [2:0] ExtOp, Branch;
    wire [1:0] ALUBSrc;
    wire [3:0] ALUctr;
    wire [2:0] MemOp;
    wire RegWr, MemtoReg, ALUASrc, MemWr;

    CtrSignal CtrSignal (
        .op(instr[6:2]),
        .func3(instr[14:12]),
        .func7(instr[30]),
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

    wire [31:0] imm;
    InstrToImm InstrToImm (
        .instr(instr),
        .ExtOp(ExtOp),
        .imm(imm)
    );

    wire [31:0] busa, busb, busw;
    regfile regfile (
        .clk(clk),
        .ra(instr[19:15]),
        .rb(instr[24:20]),
        .we(RegWr),
        .busw(busw & ~done),
        .rw(instr[11:7]),
        .busa(busa),
        .busb(busb)
    );

    wire [31:0] ALUa, ALUb;
    assign ALUa = (ALUASrc == 1) ? PC : busa;
    assign ALUb = (ALUBSrc == 2'b00) ? busb : ((ALUBSrc === 2'b01) ? imm : 32'h00000004);
    wire zero; wire [31:0] ALUresult;
    ALU_RV32 ALU_RV32 (
        .da(ALUa),
        .db(ALUb),
        .aluctr(ALUctr),
        .zero(zero),
        .result(ALUresult)
    );

    wire [31:0] dataout;

    DataMem DataMem (
        .clk(clk),
        .WrEn(MemWr),
        .MemEn(~rst & ~done),
        .DataIn(busb),
        .MemOp(MemOp),
        .Addr(ALUresult),
        .DataOut(dataout)
    );

    assign busw = (MemtoReg == 1) ? dataout : ALUresult;

    NextAddr NextAddr (
        .zero(zero),
        .result0(ALUresult[0]),
        .Branch(Branch),
        .imm(imm),
        .currentPC(PC),
        .busa(busa),
        .nextPC(nextPC)
    );

    assign nxtPC = nextPC;
    assign alures = ALUresult;
endmodule
