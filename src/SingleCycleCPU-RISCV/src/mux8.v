module mux8(
    input [31:0] a0, a1, a2, a3, a4, a5, a6, a7,
    input [2:0] s,
    output reg [31:0] result
);
    always @(*) begin
        case (s)
            3'b000: result = a0;
            3'b001: result = a1;
            3'b010: result = a2;
            3'b011: result = a3;
            3'b100: result = a4;
            3'b101: result = a5;
            3'b110: result = a6;
            3'b111: result = a7;
        endcase 
    end
endmodule
