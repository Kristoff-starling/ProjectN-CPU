`timescale 1ns / 1ns

module InstrToImm_tst();
	reg [31:0] instr;
	reg [2:0] ExtOp;
	wire [31:0] imm;
	InstrToImm InstrToImm_impl (instr, ExtOp, imm);
	initial begin
		begin instr = 32'h07b5e513; ExtOp = 0; end //ori x10, x11, 0x0000007b;
		#5
		begin instr = 32'h02710637; ExtOp = 1; end //lui x12,      0x00002710;
		#5
		begin instr = 32'hf863ae23; ExtOp = 2; end //sw x6,        0xffffff9c(x7);
		#5
		begin instr = 32'hfe7308e3; ExtOp = 3; end //beq x6, x7,   0xfffffff8;
		#5
		begin instr = 32'hfedff0ef; ExtOp = 4; end //jal x1,       0xfffffff6;
		#5
		$finish;
	end
endmodule
