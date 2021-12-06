`timescale 1ns / 1ps

module Adder32_p(
    output [31:0] f,
    output OF,SF,CF,ZF,
    output cout,
    input [31:0] x,y,
    input sub
);
    wire [31:0] tmp;
    assign tmp = (sub ? ~y : y);
    Adder32 adder(
        .x(x),
        .y(tmp),
        .sub(sub),
        .cout(cout),
        .f(f)
    );
    assign OF = (!x[31] & !tmp[31] & f[31]) | (x[31] & tmp[31] & !f[31]);
    assign SF = f[31];
    assign ZF = (f == 32'h00000000 ? 1 : 0);
    assign CF = cout ^ sub;
endmodule
