`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/10/29 23:35:35
// Design Name: 
// Module Name: msclk
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

module clk025s(//…®√Ë∑÷∆µ
  input clk,
  input rst,
  output reg clkout
  );
  integer i=0;
  initial clkout=0;
  always@(posedge clk)begin
  if(rst) i<=0;
  else if(i==12499999) begin clkout<=~clkout;i=0; end
  else i<=i+1;
  end
endmodule