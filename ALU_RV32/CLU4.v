`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/10/06 23:16:07
// Design Name: 
// Module Name: CLU4
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


module CLU4(
    output [4:1] c,
    input [4:1] p,g,
    input c0
);
    assign c[1]=g[1] | (p[1] & c0);
    genvar i;
    generate
        for (i=2;i<=4;i=i+1) begin
            assign c[i]=g[i] | (p[i] & c[i-1]);
        end
    endgenerate
endmodule
