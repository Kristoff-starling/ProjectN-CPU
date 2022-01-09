module InstrToImm(
	input [31:0] instr,
    input [2:0] ExtOp,
    output reg [31:0] imm,
    output reg reada,
    output reg readb,
    output reg protect
);
	always @(*) begin
		case(ExtOp)
			0: begin // I-type
				imm = {{20{instr[31]}}, instr[31:20]};                               
				reada = 1; readb = 0; protect = 1;
			end
			1: begin // U-type
				imm = {instr[31:12], 12'b0};
				reada = 0; readb = 0; protect = 1;
			end
			2: begin // S-type
				imm = {{20{instr[31]}}, instr[31:25], instr[11:7]};                  
				reada = 1; readb = 1; protect = 0;
			end
			3: begin // B-type
				imm = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8],1'b0};   
				reada = 1; readb = 1; protect = 0;
			end
			4: begin // J-type
				imm = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21],1'b0}; 
				reada = 0; readb = 0; protect = 0;
			end
			5: begin // R-type
				imm = 0;
				reada = 1; readb = 1; protect = 1;
			end
		endcase
	end
endmodule
