`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/10/06 23:51:31
// Design Name: 
// Module Name: CLA4
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


module CLA4(
    output [3:0] f,
    output cout,
    input [3:0] x,y,
    input cin
);
    wire [4:1] p,g;
    wire [4:1] c;
    assign p=x|y;
    assign g=x&y;
    CLU4 gen(
        .c0(cin),
        .p(p),
        .g(g),
        .c(c)
    );
    genvar i;
    FA adder(
        .x(x[0]),
        .y(y[0]),
        .cin(cin),
        .f(f[0])
    );
    generate
        for (i=1;i<=3;i=i+1) begin
            FA adder(
                .x(x[i]),
                .y(y[i]),
                .cin(c[i]),
                .f(f[i])
            );
        end
    endgenerate
    assign cout = c[4];
endmodule
