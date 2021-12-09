module ALU_signal(
    input [3:0] aluctr,
    output SUBctr,
    output SFTctr,
    output ALctr,
    output reg [2:0] OPctr,
    output SIGctr
);
    assign SUBctr = (aluctr == 4'b0000) ? 0 : 1;
    assign SFTctr = (aluctr == 4'b0001) ? 0 : 1;
    assign ALctr  = (aluctr == 4'b1101) ? 1 : 0;
    assign SIGctr = (aluctr == 4'b0011) ? 0 : 1;
    always @(*) begin
        case(aluctr)
            4'b0000: OPctr = 3'b000;
            4'b0001: OPctr = 3'b100;
            4'b0010: OPctr = 3'b110;
            4'b0011: OPctr = 3'b110;
            4'b0100: OPctr = 3'b011;
            4'b0101: OPctr = 3'b100;
            4'b0110: OPctr = 3'b010;
            4'b0111: OPctr = 3'b001;
            4'b1000: OPctr = 3'b000;
            4'b1101: OPctr = 3'b100;
        endcase
    end
endmodule
