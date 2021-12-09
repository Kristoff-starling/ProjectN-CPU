module InstrToImm(
    input [31:0] instr,
    input [2:0] ExtOp,
    output reg [31:0] imm
);
  always@(*) begin
    case(ExtOp)
        0: imm={{20{instr[31]}},instr[31:20]};//i
        1: imm={instr[31:12],12'b0};//u
        2: imm={{20{instr[31]}},instr[31:25],instr[11:7]};//s
        3: imm={{20{instr[31]}},instr[7],instr[30:25],instr[11:8],1'b0};//b
        4: imm={{12{instr[31]}},instr[19:12],instr[20],instr[30:21],1'b0};//j
    endcase
  end
endmodule
