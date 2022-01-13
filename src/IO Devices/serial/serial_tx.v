`timescale 1ns / 1ps

module serial_tx(clk,data,tx_valid,tx_ready,tx_out);
parameter transbit=8;
parameter stopbit=2;
//`define NONE
//`define EVEN
`define ODD
//`define MASK
//`define SPACE
input clk;
input [transbit-1:0] data;
input tx_valid;
output reg tx_out;
output tx_ready;


wire tx_clk; // serail clock
reg  tx_busy;
reg [transbit+3:0] tx_buf;
reg [3:0]  tx_count;
wire parity;
`ifdef NONE 
assign parity = 0;
`endif 
`ifdef EVEN
assign parity = (^(data) == 1)? 1:0; 
`endif
`ifdef ODD
assign parity = (^(data) == 0)? 1:0;
`endif 
`ifdef MASK
assign parity = 1;
`endif 
`ifdef SPACE
assign parity = 0;
`endif 

initial
begin
    tx_count= 4'd0;
    tx_busy = 1'b0;
    tx_out = 1'b1;
end
clkgen #(9600) mytxclk(clk,1'b0,1'b1,tx_clk); //always enable tx_clock
assign tx_ready = tx_busy == 0;
always@(posedge tx_clk) begin //in tx_clk, transform data
    if(tx_valid == 1 && tx_busy == 0)begin 
        tx_busy <= 1;
        tx_count <= 0;
`ifdef NONE
        tx_buf <= {2'b11,data,1'h0};
`else
        tx_buf <= {2'b11,parity,data,1'h0};
`endif
    end
    else if(tx_busy == 1) begin

`ifdef NONE 
        if(tx_count == transbit+stopbit) begin
            tx_busy <= 0;
            tx_out <= 1;
        end
`else
        if(tx_count == transbit+1+stopbit) begin
             tx_busy <= 0;
             tx_out <= 1;
        end
`endif
        else begin
            tx_count <= tx_count + 1;
            tx_out <= tx_buf[tx_count];
        end
    end
end

endmodule

