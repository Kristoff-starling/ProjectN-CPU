`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/10/07 00:43:58
// Design Name: 
// Module Name: CLA8
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


module CLA8(
    output [7:0] f,
    output cout,
    input [7:0] x,y,
    input cin
);
    wire cin2;
    wire [3:0] p,g;
    assign p=x[3:0] | y[3:0];
    assign g=x[3:0] & y[3:0];
    assign cin2=g[3] | (p[3]&g[2]) | (p[3]&p[2]&g[1]) | (p[3]&p[2]&p[1]&g[0]) | (p[3]&p[2]&p[1]&p[0]&cin);
    CLA4 adder_low(
        .x(x[3:0]),
        .y(y[3:0]),
        .cin(cin),
        .f(f[3:0])
    );
    CLA4 adder_high(
        .x(x[7:4]),
        .y(y[7:4]),
        .cin(cin2),
        .f(f[7:4]),
        .cout(cout)
    );
endmodule
