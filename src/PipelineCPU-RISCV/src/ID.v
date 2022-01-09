module ID(
    input clk, flush, block,
    input [31:0] in_instr,
    input [31:0] in_PC,
    input in_RegWr,
    input [31:0] in_busw,
    input [4:0] in_rw,

    output [31:0] currentPC,
    output [31:0] imm,
    output [2:0] Branch,
    output [1:0] ALUBSrc,
    output [3:0] ALUctr,
    output [2:0] MemOp,
    output RegWr, MemtoReg, ALUASrc, MemWr,
    output [31:0] busa, busb,
    output [4:0] rw,
    output blk,
    output done,

    output [31:0] reg00,
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
    output [31:0] reg31,

    input in_valid,
    input out_ready,
    output out_valid,
    output in_ready
);
    reg reg_valid_r;
    reg [31:0] reg_instr, reg_PC;

    wire receive_flag, send_flag;

    always @(negedge clk) begin
        if (flush) reg_valid_r <= 0;
        else reg_valid_r <= (receive_flag || (reg_valid_r && !send_flag)) ? 1 : 0;
        if (receive_flag) begin
            reg_instr   <= in_instr;
            reg_PC      <= in_PC;
            // $display("ID's PC: %h", in_PC);
            // $display("ID's RegWr: %b", in_RegWr);
            // $display("ID's instr: %h", in_instr);
        end
        // $display("ID's out_valid: %b", out_valid);
        // $display("ID's reg_PC: %h", reg_PC);
        // $display("ID's done: %b", done);
    end

    wire [2:0] ExtOp;
    wire reada, readb, protect;
    CtrSignal CtrSignal(
        .op(reg_instr[6:2]),
        .func3(reg_instr[14:12]),
        .func7(reg_instr[30]),
		.ban(flush),
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
        .instr(reg_instr),
        .ExtOp(ExtOp),
        .imm(imm),
        .reada(reada),
        .readb(readb),
        .protect(protect)
    );

    Regfiles Regfiles(
        .clk(clk), .flush(flush),
        .reada(reada), .readb(readb),
        .ra(reg_instr[19:15]),
        .rb(reg_instr[24:20]),
        .we(in_RegWr),
        .busw(in_busw),
        .rw(in_rw),
        .protect(protect & reg_valid_r),
        .protectw(reg_instr[11:7]),
        .busa(busa), .busb(busb),
        .conflict(blk),
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

    assign currentPC = reg_PC;
    assign rw = reg_instr[11:7];
    assign done = (reg_instr == 32'hdead10cc) ? 1 : 0;

    assign send_flag = out_valid & out_ready;
    assign receive_flag = in_valid & in_ready;
    assign out_valid = reg_valid_r & (~block) & (~flush);
    assign in_ready = !reg_valid_r || (reg_valid_r && send_flag);

    // always @(out_valid) begin
    // $display("ID's out_valid: %b", out_valid);
    // $display("ID's in_ready: %b", in_ready);
    // $display("ID's reg_PC: %h", reg_PC);
    // end
endmodule