module ID(
    input clk, rst, flush,
    input [31:0] in_instr,
    input [31:0] in_PC,
    input in_RegWr,
    input in_busw,
    input in_rw,

    output [31:0] currentPC,
    output imm,
    output [2:0] Branch,
    output [1:0] ALUBSrc,
    output [3:0] ALUctr,
    output [2:0] MemOp,
    output RegWr, MemtoReg, ALUASrc, MemWr,
    output [31:0] busa, busb,

    input in_valid,
    input out_ready,
    output out_valid,
    output in_ready
);
    wire reg_valid_r;
    reg [31:0] instr, PC;

    always @(negedge clk) begin
        if (receive_flag) begin
            instr <= in_instr;
            PC <= in_PC;
        end
    end

    wire [2:0] ExtOp;
    wire reada, readb, protect;
    CtrSignal CtrSignal(
        .op(instr[6:2]),
        .func3(instr[14:12]),
        .func7(instr[30]),
		.ban(rst),
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

    InstrToImm InstrToImm(
        .instr(instr),
        .ExtOp(ExtOp),
        .imm(imm),
        .reada(reada),
        .readb(readb),
        .protect(protect)
    );

    wire conflict;
    Regfile Regfile(
        .clk(clk),
        .reada(reada), .readb(readb),
        .ra(instr[19:15]),
        .rb(instr[24:20]),
        .we(in_RegWr),
        .busw(in_busw),
        .rw(in_rw),
        .protect(protect),
        .protectw(instr[11:7]),
        .busa(busa), .busb(busb),
        .conflict(conflict)
    );

    assign reg_valid_r = (receive_flag && !flush);
    assign send_flag = out_valid & out_ready;
    assign receive_flag = in_valid & in_ready;
    assign out_valid = reg_valid_r & (~conflict) & (~rst);
    assign in_ready = (!flush) && (!reg_valid_r || (reg_valid_r && send_flag));
endmodule