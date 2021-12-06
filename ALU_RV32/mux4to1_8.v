`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/10/08 23:35:41
// Design Name: 
// Module Name: mux4to1_8
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


module mux4to1_8(
    output reg [7:0] y,
    input [7:0] a0, a1, a2, a3,
    input [1:0] s
);
    always @(*) begin
        case(s)
            2'b00: y=a0;
            2'b01: y=a1;
            2'b10: y=a2;
            2'b11: y=a3;
        endcase
    end
endmodule
