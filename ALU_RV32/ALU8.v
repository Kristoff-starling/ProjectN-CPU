`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/10/08 23:02:40
// Design Name: 
// Module Name: ALU8
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


module ALU8(
    output [7:0] result,
    output zero,
    output cout,
    input [7:0] a,
    input [7:0] b,
    input [3:0] aluctr
);
    wire SUBctr, SIGctr;
    wire [1:0] OPctr;
    wire [7:0] tmp;
    wire cf, overflow, sign;
    
    assign SUBctr=((aluctr==4'b0010 | aluctr==4'b0011 | aluctr==4'b1000) ? 1 : 0);
    assign SIGctr=(aluctr==4'b0010 ? 1 : 0);
    assign OPctr=((aluctr==4'b0000 || aluctr==4'b1000) ? 2'b00 : ((aluctr==4'b0010 || aluctr==4'b0011) ? 2'b11 : (aluctr==4'b0110 ? 2'b01 : 2'b10)));

    Adder8_p adder(
        .x(a),
        .y(b),
        .sub(SUBctr),
        .CF(cf),
        .OF(overflow),
        .ZF(zero),
        .SF(sign),
        .f(tmp),
        .cout(cout)
    );
    
    wire [7:0] input3;
    assign input3[7:1]=7'b0000000;
    assign input3[0]=(SIGctr==1'b1 ?  (overflow ^ sign) : cf);
    
    mux4to1_8 selector(
        .a0(tmp),
        .a1(a | b),
        .a2(b),
        .a3(input3),
        .s(OPctr),
        .y(result)
    );
    
endmodule
