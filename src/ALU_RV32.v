module ALU_RV32(
    input [31:0] da, db,
    input [3:0] aluctr,
    output zero,
    output [31:0] result
);
    wire SUBctr, SFTctr, ALctr, SIGctr; wire [2:0] OPctr;
    ALU_signal sig_generator(
        .aluctr(aluctr),
        .SUBctr(SUBctr),
        .SFTctr(SFTctr),
        .ALctr(ALctr),
        .OPctr(OPctr),
        .SIGctr(SIGctr)
    );

    wire CF, OF, SF, comF;
    wire [31:0] input0, input1, input2, input3, input4, input5, input6, input7;
    Adder32_p adder (
        .sub(SUBctr),
        .x(da),
        .y(db),
        .OF(OF), .SF(SF), .CF(CF), .ZF(zero),
        .f(input0)
    );
    assign input1 = da | db;
    assign input2 = da & db;
    assign input3 = da ^ db;
    barellshift shift(
        .din(da),
        .shamt(db[4:0]),
        .AL(ALctr),
        .LR(SFTctr),
        .dout(input4)
    );
    assign input5 = db;
    assign comF = (SIGctr == 1) ? (OF ^ SF) : CF;
    assign input6 = (comF == 1) ? 32'h00000001 : 32'h00000000;
    assign input7 = 0;

    mux8 selector (
        .a0(input0), .a1(input1), .a2(input2), .a3(input3),
        .a4(input4), .a5(input5), .a6(input6), .a7(input7),
        .s(OPctr),
        .result(result)
    );
endmodule
