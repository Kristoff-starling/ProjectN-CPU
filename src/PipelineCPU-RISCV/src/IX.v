module IX (
    input clk, rst, flush,
    input [31:0] busa, busb,
    input [31:0] in_PC,
    input [2:0] Branch,
    input [1:0] ALUBSrc,
    input [3:0] ALUctr,
    input [2:0] MemOp,
    input RegWr, MemtoReg, ALUASrc, MemWr,

    output zero,

    input in_valid,
    input out_ready,
    output out_valid,
    output in_ready

);

    wire [31:0] alures;
    ALU_RV32 ALU(
        .da(busa),
        .db(busb),
        .result(alures),
        .zero(zero)
    );

    assign reg_valid_r = receive_flag;
    assign send_flag = out_valid & out_ready;
    assign receive_flag = in_valid & in_ready;
    assign out_valid = reg_valid_r;
    assign in_ready = (!flush) && (!reg_valid_r || (reg_valid_r && send_flag));

endmodule