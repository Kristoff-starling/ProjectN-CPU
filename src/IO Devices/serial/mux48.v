`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2016/08/24 16:24:21
// Design Name: 
// Module Name: mux48
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


module mux48(
    input [7:0] x0,
    input [7:0] x1,
    input [7:0] x2,
    input [7:0] x3,
    input [7:0] x4,
    input [7:0] x5,
    input [7:0] x6,
    input [7:0] x7,
    input [2:0] sel,
    output reg [7:0] y
    );
    always @ (x0 or x1 or x2 or x3 or x4 or x5 or x6 or x7 or sel)
      case(sel)
      3'd0: y=x0;
      3'd1: y=x1;
      3'd2: y=x2;
      3'd3: y=x3;
      3'd4: y=x4;
      3'd5: y=x5;
      3'd6: y=x6;
      3'd7: y=x7;
      endcase
endmodule
