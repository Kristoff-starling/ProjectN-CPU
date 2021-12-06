`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/10/06 23:05:34
// Design Name: 
// Module Name: CRA8
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


module CRA8(
    output [7:0] f,
    output cout,
    input [7:0] x,y,
    input cin
);
    wire [7:0] cout_temp;
    FA adder_1(
        .x(x[0]),
        .y(y[0]),
        .cin(cin),
        .cout(cout_temp[0]),
        .f(f[0])
    );
    genvar i;
    generate
        for (i=1;i<=7;i=i+1) begin
            FA adder_1(
                .x(x[i]),
                .y(y[i]),
                .cin(cout_temp[i-1]),
                .cout(cout_temp[i]),
                .f(f[i])
            );
        end
    endgenerate
    assign cout=cout_temp[7];
endmodule
