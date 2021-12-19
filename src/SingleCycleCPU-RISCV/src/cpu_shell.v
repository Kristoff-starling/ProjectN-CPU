module cpu_tst(
	input clk,                
	input reset,              //复位高有效
	input [8*8:1] testcase,   //TestCase
	output [31:0] dbg_pc,     //当前周期已经完成的指令的PC值
	output [31:0] dbgregs_0,  
	output [31:0] dbgregs_1,
	output [31:0] dbgregs_2,	
	output [31:0] dbgregs_3,
	output [31:0] dbgregs_4,
	output [31:0] dbgregs_5,
	output [31:0] dbgregs_6,	
	output [31:0] dbgregs_7,
	output [31:0] dbgregs_8,
	output [31:0] dbgregs_9,
	output [31:0] dbgregs_10,	
	output [31:0] dbgregs_11,
	output [31:0] dbgregs_12,
	output [31:0] dbgregs_13,
	output [31:0] dbgregs_14,	
	output [31:0] dbgregs_15,
	output [31:0] dbgregs_16,
	output [31:0] dbgregs_17,	
	output [31:0] dbgregs_18,
	output [31:0] dbgregs_19,
	output [31:0] dbgregs_20,
	output [31:0] dbgregs_21,	
	output [31:0] dbgregs_22,
	output [31:0] dbgregs_23,
	output [31:0] dbgregs_24,
	output [31:0] dbgregs_25,	
	output [31:0] dbgregs_26,
	output [31:0] dbgregs_27,
	output [31:0] dbgregs_28,
	output [31:0] dbgregs_29,	
	output [31:0] dbgregs_30,
	output [31:0] dbgregs_31,
	output done,              //当读取到0xdead10cc的Instr的时候完成拉高，保持PC不变
	output wb                 //当前周期是否有指令完成
);

// CPU declaration

// signals
wire [31:0] iaddr,idataout;
wire iclk;
wire [31:0] daddr,ddataout,ddatain;
wire drdclk, dwrclk, dwe;
wire [2:0]  dop;

//main CPU
rv32is mycpu(.clk(clk), 
             .rst(reset), 
				 .imemaddr(iaddr), .imemdataout(idataout), .imemclk(iclk), 
				 .dmemaddr(daddr), .dmemdataout(ddataout), .dmemdatain(ddatain), .dmemrdclk(drdclk), .dmemwrclk(dwrclk), .dmemop(dop), .dmemwe(dwe), 
				 .dbg_pc(dbg_pc), .done(done), .wb(wb),
			.reg00(dbgregs_0 ),
			.reg01(dbgregs_1 ),
			.reg02(dbgregs_2 ),
			.reg03(dbgregs_3 ),
			.reg04(dbgregs_4 ),
			.reg05(dbgregs_5 ),
			.reg06(dbgregs_6 ),
			.reg07(dbgregs_7 ),
			.reg08(dbgregs_8 ),
			.reg09(dbgregs_9 ),
			.reg10(dbgregs_10),
			.reg11(dbgregs_11),
			.reg12(dbgregs_12),
			.reg13(dbgregs_13),
			.reg14(dbgregs_14),
			.reg15(dbgregs_15),
			.reg16(dbgregs_16),
			.reg17(dbgregs_17),
			.reg18(dbgregs_18),
			.reg19(dbgregs_19),
			.reg20(dbgregs_20),
			.reg21(dbgregs_21),
			.reg22(dbgregs_22),
			.reg23(dbgregs_23),
			.reg24(dbgregs_24),
			.reg25(dbgregs_25),
			.reg26(dbgregs_26),
			.reg27(dbgregs_27),
			.reg28(dbgregs_28),
			.reg29(dbgregs_29),
			.reg30(dbgregs_30),
			.reg31(dbgregs_31)
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
						.we(dwe));


always @(posedge clk) begin
	if(reset == 1) begin
		$readmemh({testcase, ".hex"},instructions.ram);
    	$readmemh({testcase, "_d.hex"},datamem.mymem.ram);
		$display("~~~ Begin test case %s ~~~", testcase);
	end
end

/*
reg [31:0] count_r;
always @(posedge clk) begin
  if(reset == 1) begin
    count_r <= 0;
  end
  else begin
    count_r <= count_r + 1;
    $display("count_r: %d ",count_r);
  end
end
*/

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
		
endmodule

module testdmem(
   byteena_a,
	data,
	rdaddress,
	rdclock,
	wraddress,
	wrclock,
	wren,
	q);
	

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

	
	reg [31:0] ram [32767:0];
	always @(negedge rdclock)
	begin
	   if(wren)
			tempout <= ram[wraddress];
		else
		begin
			q <= ram[rdaddress];
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

module dmem(addr, dataout, datain, rdclk, wrclk, memop, we);
	input  [31:0] addr;
	output reg [31:0] dataout;
	input  [31:0] datain;
	input  rdclk;
	input  wrclk;
	input [2:0] memop;
	input we;
	
	wire [31:0] memin;
	reg  [3:0] wmask;
	wire [7:0] byteout;
	wire [15:0] wordout;
	wire [31:0] dwordout;
 

assign memin = (memop[1:0]==2'b01)?{4{datain[7:0]}}:((memop[1:0]==2'b00)?datain:{2{datain[15:0]}}) ; //lb: same for all four, lh:copy twice; lw:copy

//four memory chips	
testdmem mymem(.byteena_a(wmask),.data(memin), .rdaddress(addr[16:2]), .rdclock(rdclk), .wraddress(addr[16:2]), .wrclock(wrclk), .wren(we), .q(dwordout) );
//wmask,addr[16:2]
assign wordout = (addr[1]==1'b1)? dwordout[31:16]:dwordout[15:0];

assign byteout = (addr[1]==1'b1)? ((addr[0]==1'b1)? dwordout[31:24]:dwordout[23:16]):((addr[0]==1'b1)? dwordout[15:8]:dwordout[7:0]);


always @(*)
begin
  case(memop)
  3'b001: //lb
     dataout = { {24{byteout[7]}}, byteout};
  3'b010: //lh
     dataout = { {16{wordout[15]}}, wordout};
  3'b000: //lw
     dataout = dwordout;
  3'b101: //lbu
     dataout = { 24'b0, byteout};
  3'b110: //lhu
     dataout = { 16'b0, wordout};
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
