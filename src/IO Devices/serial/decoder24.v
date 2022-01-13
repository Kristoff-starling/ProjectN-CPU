`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2016/08/23 16:17:10
// Design Name: 
// Module Name: decoder24
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


module decoder38(
    input [2:0] x,
    output reg [7:0] y
    );
    always @(x)
    begin
       y=8'h00;
       y[x]=1;
    end
      
endmodule
