/* verilator lint_off PINMISSING */
module NextAddr(
    input zero,
    input result0,
    input [2:0] Branch,
    input [31:0] imm,
    input [31:0] currentPC,
    input [31:0] busa,
    output [31:0] nextPC
);
    wire NxtASrc, NxtBSrc;
    JumpCtr jumper (
        .zero(zero),
        .result0(result0),
        .Branch(Branch),
        .NxtASrc(NxtASrc),
        .NxtBSrc(NxtBSrc)
    );
    wire [31:0] da, db;
    assign db = (NxtBSrc == 1) ? imm : 32'h00000004;
    assign da = (NxtASrc == 1) ? busa : currentPC;
    Adder32_p adder_jump (
        .x(da),
        .y(db),
        .sub(1'b0),
        .f(nextPC)
    );
endmodule
