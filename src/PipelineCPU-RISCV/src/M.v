module M(
    input clk,
    input rst,
    output reg flush,
    
    input MemWr,
    input [2:0] MemOp,
    input [2:0] Branch,

    input done, 
    input zero,
    input [31:0] Di,
    input [31:0] ALUout,
    input [31:0] imm,
    input [31:0] currentPC,
    input [31:0] busa,
        
    input MemtoReg,
    input RegWr,
    input [4:0] Rd,
   
    output reg MemtoReg_o,
    output reg RegWr_o,
    output reg [4:0] Rd_o,
    output reg [31:0] ALUout_o,
	output reg [2:0] Branch_o,
	output reg zero_o,
    output reg done_o,
    output reg [31:0] PC_o,

	output [31:0] dmemaddr,
	input [31:0] dmemdataout,
	output [31:0] dmemdatain,
	output dmemrdclk,
	output dmemwrclk,
	output [2:0] dmemop,
	output dmemwe,
    
    output [31:0] Do,
    
    input in_valid,
    input out_ready,
    output in_ready,
    output out_valid,
    output [31:0] nextPC
);
    reg reg_valid_r;
    wire send_flag, receive_flag;
    assign send_flag = out_valid & out_ready;
    assign receive_flag = in_valid & in_ready;
    assign out_valid = reg_valid_r & (~rst);
    assign in_ready = !reg_valid_r || (reg_valid_r && send_flag);

    reg we;
    reg [2:0] MemOp_i;
    reg [31:0] Di_i;
    reg [2:0] Branch_i;
    reg [31:0] addr;
    reg zero_i;
    reg [31:0] imm_i;
    reg [31:0] currentPC_i;
    reg [31:0] busa_i;

    always@(negedge clk) begin
        if (rst) reg_valid_r <= 0;
        else reg_valid_r <= (receive_flag || (reg_valid_r && !send_flag)) ? 1 : 0;
        if (receive_flag) begin
            reg_valid_r <= 1'b1;
            MemtoReg_o <= MemtoReg;
            RegWr_o <= RegWr;
            Rd_o <= Rd;
            ALUout_o <= ALUout;
			Branch_o <= Branch;
            we <= MemWr;
            MemOp_i <= MemOp;
            Di_i <= Di;
            Branch_i <= Branch;
            addr <= ALUout;
            zero_i <= zero;
			zero_o <= zero;
            imm_i <= imm;
            currentPC_i <= currentPC;
            busa_i <= busa;
            done_o <= done;
            PC_o <= currentPC;
            // flush <= (Branch == 3'b0 ? 0 : 1);
            // $display("M's PC: %h", currentPC);
            // $display("M's zero: %h", zero);
            // $display("M's ALUout %h", ALUout);
        end
        else Branch_o <= 0;
        flush <= (receive_flag && Branch != 3'b0) ? 1 : 0;
    end

	assign dmemaddr = addr;
	assign Do = dmemdataout;
	assign dmemdatain = Di_i;
	assign dmemrdclk = clk;
	assign dmemwrclk = clk;
	assign dmemop = MemOp_i;
	assign dmemwe = we & (~done);
    
    // dmem datamem(addr, Do, Di_i, clk, MemOp_i, we);
    
    wire result0 = addr[0];
    NextAddr NextAddr (
		.zero(zero_i),
		.rst(flush),
		.result0(result0),
		.Branch(Branch_i),
		.imm(imm_i),
		.currentPC(currentPC_i),
		.busa(busa_i),
		.nextPC(nextPC)
	);

    // always @(nextPC)
    // $display("M's nextPC: %h", nextPC);
    
endmodule