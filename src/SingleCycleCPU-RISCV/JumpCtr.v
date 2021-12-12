module JumpCtr(
    input [2:0] Branch,
    input result0,
    input zero,
    output reg NxtASrc,
    output reg NxtBSrc
);
    always@(*)
        case(Branch)
            3'b000: begin NxtASrc = 0; NxtBSrc = 0; end
            3'b001: begin NxtASrc = 0; NxtBSrc = 1; end
            3'b010: begin NxtASrc = 1; NxtBSrc = 1; end
            3'b100: begin NxtASrc = 0; NxtBSrc = zero; end
            3'b101: begin NxtASrc = 0; NxtBSrc = ~zero; end
            3'b110: begin NxtASrc = 0; NxtBSrc = result0; end
            3'b111: begin NxtASrc = 0; NxtBSrc = zero | (~result0); end
       endcase
endmodule
