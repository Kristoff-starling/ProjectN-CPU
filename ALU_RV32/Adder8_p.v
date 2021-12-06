`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/10/07 09:55:31
// Design Name: 
// Module Name: Adder8_p
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module Adder8_p(
    output [7:0] f,
    output OF,SF,CF,ZF,
    output cout,
    input [7:0] x,y,
    input sub
);
    wire [7:0] tmp;
    assign tmp=(sub ? ~y : y);
    parameter t=8;
    CLA8 adder(
        .cin(sub),
        .x(x),
        .y(tmp),
        .cout(cout),
        .f(f)
    );
    assign OF=(!x[t-1] & !tmp[t-1] & f[t-1]) | (x[t-1] & tmp[t-1] & !f[t-1]);
    assign SF=f[t-1];
    assign ZF=(f==8'b00000000 ? 1 : 0);
    assign CF=cout^sub;
endmodule
