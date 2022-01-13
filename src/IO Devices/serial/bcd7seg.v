`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2016/08/23 14:01:31
// Design Name: 
// Module Name: bcd7seg
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


module bcd7seg(b,h);
input [3:0] b;
output reg[7:0] h;

always@(b)
     case(b)
	        4'd0:h=8'b11000000;
			4'd1:h=8'b11111001;
			4'd2:h=8'b10100100;
			4'd3:h=8'b10110000;
	        4'd4:h=8'b10011001;
			4'd5:h=8'b10010010;
			4'd6:h=8'b10000010;
			4'd7:h=8'b11111000;
			4'd8:h=8'b10000000;
			4'd9:h=8'b10010000;
			4'd10:h=8'b10001000;
			4'd11:h=8'b10000011;
			4'd12:h=8'b11000110;
			4'd13:h=8'b10100001;
			4'd14:h=8'b10000110;
			4'd15:h=8'b10001110;
			default:h=8'b11111111;
	  endcase
	 
endmodule

module rebcd7seg(clk, rst, done, f, cnt_t0, cnt_t1, cnt_t2, cnt_t3, cnt_t4);
    input clk;
    input rst;
    input done;
    input [7:0] f;
    output reg [3:0] cnt_t0, cnt_t1, cnt_t2, cnt_t3, cnt_t4;
    time cnt;
    always@(negedge clk) begin
	if(rst || done) begin 
	   if(rst) begin
	       cnt <= 0;
	       cnt_t0 <= 0;  cnt_t1 <= 0; cnt_t2 <= 0; cnt_t3 <= 0; cnt_t4 <= 0;
	   end
	   else begin
	       cnt <= cnt;
	       cnt_t0 <= cnt_t0;  cnt_t1 <= cnt_t1; cnt_t2 <= cnt_t2; cnt_t3 <= cnt_t3; cnt_t4 <= cnt_t4;
	   end
    end
	else begin
	 //  cnt <= cnt + 1;
	   if (cnt == f) begin
	       cnt <= 0;
	       if(cnt_t0 == 9) begin
	           cnt_t0 <= 0;
	           if(cnt_t1 == 9) begin
	               cnt_t1 <= 0;
	               if(cnt_t2 == 9) begin
                       cnt_t2 <= 0;
                       if(cnt_t3 == 9) begin
                           cnt_t3 <= 0;
                           if(cnt_t4 == 9) begin
                               cnt_t4 <= 0;


                           end
                           else begin
                                cnt_t4 <= cnt_t4 + 1;
                           end
                       end
                       else begin
                            cnt_t3 <= cnt_t3 + 1;
                       end
                   end
                   else begin
                        cnt_t2 <= cnt_t2 + 1;
                   end
	           end
	           else begin
                    cnt_t1 <= cnt_t1 + 1;
               end
	       end
	       else begin
                cnt_t0 <= cnt_t0 + 1;
           end
	   end	  
	   else cnt <= cnt + 1;
	end
end
endmodule