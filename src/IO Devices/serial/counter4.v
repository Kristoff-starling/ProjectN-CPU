`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2016/08/23 15:01:04
// Design Name: 
// Module Name: counter4
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


module counter8(
    input clk,
    input en,
    input rst,
    output reg [2:0] y
    );
    always @(posedge clk)
    begin
    if(rst)
       y<=0;
    else
       if(en)
          y<=y+1;
       else
          y<=y;
       
    end
endmodule
