module am_cpu(
    input clk,                
	input reset,
	input [15:0] sw,
	input [4:0] bt,
	output done, 
	output [15:0] led,
	output rxd_out,
	output cts,
	input rts,
	output [7:0] iSEG,
    output [7:0] iSEGSEL
	,output pc
);

wire [31:0] dbg_pc;
assign pc = dbg_pc[0];
cpu_tst cpu(.clk(clk),.reset(~reset),.done(done),.led(led),.dbg_pc(dbg_pc),.sw(sw),.bt(bt), .rxd_out(rxd_out), .cts(cts), .rts(rts), .iSEG(iSEG), .iSEGSEL(iSEGSEL));

endmodule

module cpu_tst(
	input clk,                
	input reset,              //复位高有�?
    input [15:0] sw,
	input [4:0] bt,
//	input [8*8:1] testcase,   //TestCase
	output [31:0] dbg_pc,     //当前周期已经完成的指令的PC�?
	output done,              //当读取到0xdead10cc的Instr的时候完成拉高，保持PC不变
//	output wb,                 //当前周期是否有指令完�?
	output [15:0] led,
	output rxd_out,
	output cts,
	input rts,
	output [7:0] iSEG,
    output [7:0] iSEGSEL
);

// CPU declaration

// signals
wire [31:0] iaddr,idataout;
wire iclk;
wire [31:0] daddr,ddataout,ddatain;
wire drdclk, dwrclk, dwe;
wire [2:0]  dop;

//main CPU
wire is_done;
assign done = is_done;
//wire [31:0] dbg_pc;
rv32is mycpu(.clk(clk), 
             .rst(reset), 
				 .imemaddr(iaddr), .imemdataout(idataout), .imemclk(iclk), 
				 .dmemaddr(daddr), .dmemdataout(ddataout), .dmemdatain(ddatain), .dmemrdclk(drdclk), .dmemwrclk(dwrclk), .dmemop(dop), .dmemwe(dwe), 
				 .dbg_pc(dbg_pc), .done(is_done), .wb(wb)
);
//instruction mreg00emory, no writing
testmem instructions(
	.address(iaddr[17:2]),
	.clock(iclk),
	.data(32'b0),
	.wren(1'b0),
	.q(idataout));
	
//data memory	

dmem datamem(.addr(daddr), 
             .dataout(ddataout), 
						.datain(ddatain), 
						.rdclk(drdclk), 
						.wrclk(dwrclk), 
						.memop(dop), 
						.we(dwe),
						.rst(reset),
						.done(is_done),
		.led(led),.sw(sw),.bt(bt),
 .rxd_out(rxd_out), .cts(cts), .rts(rts), 
 .iSEG(iSEG), .iSEGSEL(iSEGSEL)
);

endmodule

module testmem(
	address,
	clock,
	data,
	wren,
	q);
    input	[15:0]  address;
	input	  clock;
	input	[31:0]  data;
	input	  wren;
	output reg	[31:0]  q;
	
	reg [31:0] ram [65535:0];
	always@(posedge clock)
		q <= ram[address];
	initial begin

		$readmemh("D:/DLCOE/CPU/tstt.hex",ram);

    end		
endmodule

module testdmem(
   byteena_a,
	data,
	rdaddress,
	rdclock,
	wraddress,
	wrclock,
	wren,
	q
);
	

	input [3:0]  byteena_a;
	input	[31:0]  data;
	input	[14:0]  rdaddress;
	input	  rdclock;
	input	[14:0]  wraddress;
	input	  wrclock;
	input	  wren;
	output reg	[31:0]  q;
	

	reg  [31:0] tempout;
	wire [31:0] tempin;
    reg [31:0] tmpled;
	reg [31:0] ram [32767:0];


	always @(negedge rdclock)
	begin
	   if(wren)
			tempout <= ram[wraddress];
		else
		begin
			q <=  ram[rdaddress];
		end
	end
	
	assign tempin[7:0]   = (byteena_a[0])? data[7:0]  : tempout[7:0];
	assign tempin[15:8]  = (byteena_a[1])? data[15:8] : tempout[15:8];
	assign tempin[23:16] = (byteena_a[2])? data[23:16]: tempout[23:16];
	assign tempin[31:24] = (byteena_a[3])? data[31:24]: tempout[31:24];
	
	always@(posedge wrclock)
	begin
		if(wren) 
		begin
			 ram[wraddress]<=tempin;
		end
	end
		
endmodule

module dmem(addr, dataout, datain, rdclk, wrclk, memop, we, rst, done,
 led, sw, bt,
 rxd_out, cts, rts,
  iSEG, iSEGSEL);
	input  [31:0] addr;
	output reg [31:0] dataout;
	input  [31:0] datain;
	input  rdclk;
	input  wrclk;
	input [2:0] memop;
	input we;
	input rst;
	input done;
	input [15:0] sw;
	input [4:0] bt;
	output [15:0] led;
    output rxd_out;
    output cts;
    input rts;
    output [7:0] iSEG;
    output [7:0] iSEGSEL;
    
	wire datawe;
	wire [31:0] memin;
	reg  [3:0] wmask;
	wire [7:0] byteout;
	wire [15:0] wordout;
	wire [31:0] dwordout;
////* device *//// 	
    reg [31:0] tmpdev;
 	wire is_dev;
 	assign is_dev=(addr[31:28]==4'ha) ? 1'b1 : 1'b0;
 	
//timer
time cnt;
reg [63:0] rtc;
parameter Hz = 100;
parameter TIMER_ADDR_l = 32'ha0000048;
parameter TIMER_ADDR_h = 32'ha000004c;
always@(posedge rdclk) begin
	if(rst || done) begin 
	   if(rst) begin rtc <= 0; cnt <= 0; end
	   else begin rtc <= rtc; cnt <= cnt; end
    end
	else begin
	 //  cnt <= cnt + 1;
	   if (cnt == Hz) begin cnt <= 0; rtc <= rtc + 1; end
	   else cnt<= cnt + 1;
	end
end

//display

//`define HEX_TIMER
`define DEC_TIMER

    wire clk1k;
    wire [2:0] select;
    wire [7:0] segsel;
    wire [7:0] myseg[0:7];
 clkgen #(1000) myclk1k(rdclk,1'b0,1'b1,clk1k);

`ifdef HEX_TIMER
    //  HEX timer
     bcd7seg digit0(rtc[3:0],myseg[0][7:0]);
     bcd7seg digit1(rtc[7:4],myseg[1][7:0]);
     bcd7seg digit2(rtc[11:8],myseg[2][7:0]);
     bcd7seg digit3(rtc[15:12],myseg[3][7:0]);
     bcd7seg digit4(rtc[19:16],myseg[4][7:0]);
     bcd7seg digit5(rtc[23:20],myseg[5][7:0]);
     bcd7seg digit6(rtc[27:24],myseg[6][7:0]);
     bcd7seg digit7(rtc[31:28],myseg[7][7:0]);
`else
   //  DEC timer
   wire [3:0] cnt_t [4:0];
   bcd7seg digit0(cnt_t[0],myseg[0][7:0]);
   bcd7seg digit1(cnt_t[1],myseg[1][7:0]);
   bcd7seg digit2(cnt_t[2],myseg[2][7:0]);
   bcd7seg digit3(cnt_t[3],myseg[3][7:0]);
   bcd7seg digit4(cnt_t[4],myseg[4][7:0]);
   rebcd7seg bcd(rdclk, rst, done, Hz, cnt_t[0], cnt_t[1], cnt_t[2], cnt_t[3], cnt_t[4]);
   assign myseg[5] = 8'b11001000;//n
   assign myseg[6] = 8'b11000001;//u
   assign myseg[7] = 8'b11001110;//r 
`endif
     mux48   datasel(myseg[0],myseg[1], myseg[2], myseg[3],myseg[4],myseg[5], myseg[6], myseg[7], select, iSEG);
     assign iSEGSEL[7:0]=~segsel;
     decoder38  sel_seg(select, segsel); 
     counter8   selcounter(clk1k, 1'b1,1'b0,select);

//LED
reg [15:0] LED;
parameter LED_ADDR = 32'ha0000400;

assign led = LED;
//SW
wire [15:0] SW;
assign SW = sw;
parameter SW_ADDR = 32'ha0000500;
//BT

wire [7:0] BT;
assign BT = { 4'b0, bt};
parameter BT_ADDR = 32'ha0000600;

//UART
wire rts = 1'b0;
parameter PORT_ADDR = 32'ha00003f8;
    reg  [7:0] data_buf[0:2047]; //our data buffer   
    reg  [7:0] tx_data;
    wire tx_ready;
    reg  tx_send;
    reg  [10:0] rx_ptr;
    reg  [10:0] tx_ptr;
    //serial tx
    serial_tx tx_module(wrclk, tx_data, tx_send,tx_ready, rxd_out);
    assign cts = 1'b0;
    //control
always@(posedge wrclk) begin
        if(rst) begin
           tx_send <= 1'b0;
           tx_ptr <= 2'b0;
        end
      else begin
        if(addr!=PORT_ADDR) begin
          if(tx_ptr!=rx_ptr) begin//has data for tx
            if(~tx_send && tx_ready == 1) begin//tx free
              tx_data[7:0] <= data_buf[tx_ptr];
              tx_ptr<=tx_ptr+2'd1;
              tx_send<=1'b1;
            end
          end
        end
          if(tx_send == 1 && tx_ready == 0)begin //tx_busy
            tx_send<=1'b0; //he send
          end
      end
end

//device_write
always@(posedge wrclk) begin
    if(rst) begin
       LED <= 0; rx_ptr <= 2'b0;
    end
    else if(is_dev && we) begin
        case(addr)
            LED_ADDR: LED <= datain[15:0];
            PORT_ADDR: begin
                if(tx_ptr!=(rx_ptr+2'd1)) begin //no overflow
                    data_buf[rx_ptr]<=datain[7:0];
                    rx_ptr<= rx_ptr+2'd1;
                end                   
            end   
            default: tmpdev<= datain;
        endcase
    end
end

assign datawe = we & ~is_dev;

assign memin = (memop[1:0]==2'b01)?{4{datain[7:0]}}:((memop[1:0]==2'b00)?datain:{2{datain[15:0]}}) ; //lb: same for all four, lh:copy twice; lw:copy

//four memory chips	
testdmem mymem(.byteena_a(wmask),.data(memin), .rdaddress(addr[16:2]), .rdclock(rdclk), .wraddress(addr[16:2]), .wrclock(wrclk), .wren(datawe), .q(dwordout) );
//wmask,addr[16:2]
assign wordout = (addr[1]==1'b1)? dwordout[31:16]:dwordout[15:0];

assign byteout = (addr[1]==1'b1)? ((addr[0]==1'b1)? dwordout[31:24]:dwordout[23:16]):((addr[0]==1'b1)? dwordout[15:8]:dwordout[7:0]);


always @(*)
begin
  case(memop)
  3'b001: //lb
    begin
	   case(addr)
		BT_ADDR:      dataout = { {24{BT[7]}}, BT};
		default:      dataout = { {24{byteout[7]}}, byteout};
	   endcase 
	end
     
  3'b010: //lh
     begin
	   case(addr)
		SW_ADDR:      dataout = { {16{SW[15]}}, SW};
		default:      dataout = { {16{wordout[15]}}, wordout};
	   endcase 
	end
     
  3'b000: //lw
	begin
	   case(addr)
		TIMER_ADDR_l: dataout = rtc[31:0];
		TIMER_ADDR_h: dataout = rtc[63:32];
		default:      dataout = dwordout;
	   endcase 
	end
  3'b101: //lbu
    begin
	   case(addr)
		BT_ADDR:      dataout = { 24'b0, BT};
		default:      dataout = { 24'b0, byteout};
	   endcase 
	end
     
  3'b110: //lhu
     begin
	   case(addr)
		SW_ADDR:      dataout = { 16'b0, SW};
		LED_ADDR:     dataout = { 16'b0, LED};
		default:      dataout = { 16'b0, wordout};
	   endcase 
	end
	
  default:
     dataout = dwordout;
  endcase
end

always@(*)
begin
	if(we==1'b1)
	begin
		case(memop)
			3'b001://sb
			begin
				wmask[0]=(addr[1:0]==2'b00)?1'b1:1'b0;
				wmask[1]=(addr[1:0]==2'b01)?1'b1:1'b0;
				wmask[2]=(addr[1:0]==2'b10)?1'b1:1'b0;
				wmask[3]=(addr[1:0]==2'b11)?1'b1:1'b0;
			end
			3'b010://sh
			begin
				wmask[0]=(addr[1]==1'b0)?1'b1:1'b0;
				wmask[1]=(addr[1]==1'b0)?1'b1:1'b0;
				wmask[2]=(addr[1]==1'b1)?1'b1:1'b0;
				wmask[3]=(addr[1]==1'b1)?1'b1:1'b0;
			end		
			3'b000://sw
			begin
				wmask=4'b1111;
			end
			default:
			begin
				wmask=4'b0000;
			end
		endcase
	end
	else
	begin
	   wmask=4'b0000;
	end
end

endmodule
