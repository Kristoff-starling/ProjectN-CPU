`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/10/07 09:47:53
// Design Name: 
// Module Name: Adder8_s
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


module Adder8_s(
    output [7:0] f,
    output OF,SF,CF,ZF,
    output cout,
    input [7:0] x,y,
    input sub
);
    parameter t=8;
    wire [7:0] tmpy;
    assign tmpy=(sub ? ~y : y);
    CRA8 adder(
        .cin(sub),
        .x(x),
        .y(tmpy),
        .cout(cout),
        .f(f)
    );
    assign OF=(!x[t-1] & !tmpy[t-1] & f[t-1]) | (x[t-1] & tmpy[t-1] & !f[t-1]);
    assign SF=f[t-1];
    assign ZF=(f==8'b00000000 ? 1 : 0);
    assign CF=cout^sub;
endmodule
