`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/11/15 18:58:24
// Design Name: 
// Module Name: FA
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


module FA(
    output f,cout,p,g,
    input x,y,cin
);
    assign f=x^y^cin;
    assign cout= (x & y) | (x & cin) | (y & cin);
    assign g = x & y;
    assign p = x | y;
endmodule
