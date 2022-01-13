`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2017/10/17 16:56:25
// Design Name: 
// Module Name: serial_rx
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

module serial_rx(clk,txd_in,rx_data,rx_valid,rx_error);
parameter transbit=8;
parameter stopbit=2;
//`define NONE
//`define EVEN
`define ODD
//`define MASK
//`define SPACE

input clk;
input txd_in;
output [transbit-1:0] rx_data;
output rx_valid;
output reg rx_error;

wire rx_clk;
reg [2:0] clk_sync;
reg [2:0] start_sync;
reg [3:0] rx_count;
reg [12:0] rx_buf;
wire sampling;
wire start_bit;
reg rx_busy;
reg rx_clk_rst;

initial
begin
  rx_error = 1'b0;
  rx_busy = 1'b0;
  rx_clk_rst =1'b0;
end

clkgen #(9600) mytxclk(clk,rx_clk_rst,rx_busy,rx_clk); //rst the clk at negedge


always @ (posedge clk)
begin
    clk_sync <=  {clk_sync[1:0],rx_clk};
end
//get the posedge of rx_clk(9600)
assign sampling = ~clk_sync[2] & clk_sync[1]; //sampling of receive clock, posedge because we start the clock at begining of the bit

//reduce burr
always @ (posedge clk)
begin
    start_sync <=  {start_sync[1:0],txd_in};
end
assign start_bit = start_sync[2] & ~start_sync[1]; //find negedge of start bit

always @ (posedge clk) begin //triger the clock when find negedge
    if(!rx_busy) begin
        if(start_bit) begin //start receive, reset rx_clk
            rx_busy<=1'b1;
            rx_clk_rst<=1'b1;
            rx_count<=4'd0;
            rx_buf<=13'd0;
        end
    end
    else begin  //receiving
        rx_clk_rst <= 1'b0;
        if(rx_count == transbit + 1 + stopbit) begin 
            rx_busy <= 0;
        end
        if(sampling) begin
            rx_count <= rx_count + 1;
            if(rx_count == 0) begin
                rx_buf[rx_count] <= txd_in;
                if(txd_in != 0) begin
                    rx_error <= 1;
                end
            end
            else if(rx_count > 0 && rx_count <= transbit)begin
                rx_buf[rx_count] <= txd_in;
            end
            else if(rx_count == transbit + 1)begin
                rx_buf[rx_count] <= txd_in;
`ifdef NONE 
                rx_count <= rx_count + 2;   // jump 
`endif
`ifdef EVEN 
                if(^({txd_in,rx_buf[transbit:1]}) == 1)begin //data and parity‘s one num is even.when it is odd, error occur.
                    rx_error <= 1;
                end
`endif      
`ifdef ODD
                if(^({txd_in,rx_buf[transbit:1]}) == 0)begin //data and parity's one num is odd.when it is even, error occur.
                    rx_error <= 1;
                end
`endif
`ifdef MASK
                if(txd_in == 0) begin //parity is 1
                    rx_error <= 1;
                end
`endif
`ifdef SPACE
                if(txd_in == 1) begin //parity is 0
                    rx_error <= 1;
                end
`endif
            end
            else if(rx_count <= transbit + 1 + stopbit)begin
                rx_buf[rx_count] <= txd_in;
                if(txd_in!= 1) begin 
                    rx_error <= 1;
                end
            end
        end
    end
end

assign rx_valid = (rx_busy == 1) && (rx_count == transbit + 1 + stopbit);
assign rx_data = rx_buf[transbit:1];
endmodule
