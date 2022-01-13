`timescale 1ns / 1ps


module com_top(
//    input [10:0]    iSW,
    input           clk,
 //   input           btn,
    output          rxd_out,
//    input           txd_in,
    output          cts,
    input           rts,
    input [7:0] rx_data,
    input rx_finish
//    output [7:0]    iSEG,
//    output [7:0]    iSEGSEL,
//    output [10:0]    oLED
    );
    wire clk1k;
    wire [1:0] select;
    wire [3:0] segsel;
    wire [7:0] myseg[0:3];
//    reg  [7:0] mydata;
    reg  [7:0] data_buf[0:3]; //our data buffer

    
    reg  [7:0] tx_data;
    wire [7:0] rand_data;

    wire tx_ready;

    wire rx_error;
    reg  tx_send;
    reg  overflow;
    reg  [1:0] rx_ptr;
    reg  [1:0] tx_ptr;

    initial
    begin
      tx_send = 1'b0;
      overflow = 1'b0;
      rx_ptr = 2'b0;
      tx_ptr = 2'b0;
    end

    //serial tx/rx
    //tx part
    serial_tx tx_module(clk, tx_data, tx_send,tx_ready, rxd_out);
   // assign oLED[0]= rxd_out;
    assign cts = 1'b0;

    //rx part
//    serial_rx rx_module(clk, txd_in, rx_data, rx_finish, rx_error);

    //control

    always@(posedge clk) begin
      if(rx_finish) begin//recv part                  
//        mydata <= rx_data;
        if(tx_ptr!=(rx_ptr+2'd1)) begin //no overflow
            data_buf[rx_ptr]<=rx_data[7:0];
            rx_ptr<= rx_ptr+2'd1;
            overflow<=1'b0;
        end
        else begin
          overflow<=1'b1;
        end
      end
      else if(tx_ptr!=rx_ptr) begin//has data for tx
        if(~tx_send && tx_ready == 1) begin//tx free
          tx_data[7:0] <= data_buf[tx_ptr];
          tx_ptr<=tx_ptr+2'd1;
          tx_send<=1'b1;
          overflow<=1'b0;
        end
      end
      if(tx_send == 1 && tx_ready == 0)begin //tx_busy
        tx_send<=1'b0; //he send
      end
    end
//    assign oLED[10]= overflow;
//    assign oLED[9]= rx_error;

/*    //rx display 
     clkgen #(1000) myclk1k(clk,1'b0,1'b1,clk1k);
     bcd7seg digit0(mydata[3:0],myseg[0][7:0]);
     bcd7seg digit1(mydata[7:4],myseg[1][7:0]);
     bcd7seg digit2(4'b0000,myseg[2][7:0]);
     bcd7seg digit3(4'b0000,myseg[3][7:0]);
     mux48   datasel(myseg[0],myseg[1], myseg[2], myseg[3], select, iSEG);
     assign iSEGSEL[7:4]=4'b1111;
     assign iSEGSEL[3:0]=~segsel;
     decoder24  sel_seg(select, segsel); 
     counter4   selcounter(clk1k, 1'b1,1'b0,select);
     assign oLED[8:1]= rx_data;
*/
endmodule
