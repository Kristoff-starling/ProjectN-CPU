/* verilator lint_off CASEINCOMPLETE */
module CtrSignal(
    input [4:0] op,
    input [2:0] func3,
    input func7,
    input done,
    output reg [2:0] ExtOp,
    output reg [2:0] Branch,
    output reg [1:0] ALUBSrc,
    output reg [3:0] ALUctr,
    output reg [2:0] MemOp,
    output reg RegWr, MemtoReg, ALUASrc, MemWr
);
    always @(*) begin
        if (done) begin
            ExtOp = 3'b000;
            Branch = 3'b000;
            ALUBSrc = 2'b00;
            ALUctr = 4'b0000;
            MemOp = 3'b000;
            RegWr = 0;
            MemtoReg = 0;
            ALUASrc = 0;
            MemWr = 0;
        end
        else begin
            case (op)
                5'b01101: begin 
                    ExtOp = 3'b001; RegWr = 1; MemtoReg = 0; MemWr = 0; ALUASrc = 0; ALUBSrc = 2'b01; 
                    Branch = 3'b000; MemOp = 3'b000; ALUctr = 4'b1111;
                end
                5'b00101: begin 
                    ExtOp = 3'b001; RegWr = 1; MemtoReg = 0; MemWr = 0; ALUASrc = 1; ALUBSrc = 2'b01;
                    Branch = 3'b000; MemOp = 3'b000; ALUctr = 4'b0000;
                end
                5'b00100: begin 
                    ExtOp = 3'b000; RegWr = 1; MemtoReg = 0; MemWr = 0; ALUASrc = 0; ALUBSrc = 2'b01;
                    Branch = 3'b000; MemOp = 3'b000;
                    if (func3 != 3'b101) ALUctr = {1'b0, func3}; else ALUctr = {func7, func3};
                end
                5'b01100: begin
                    ExtOp = 3'b000; RegWr = 1; MemtoReg = 0; MemWr = 0; ALUASrc = 0; ALUBSrc = 2'b00;
                    Branch = 3'b000; MemOp = 3'b000; ALUctr = {func7, func3};
                end
                5'b11011: begin 
                    ExtOp = 3'b100; RegWr = 1; MemtoReg = 0; MemWr = 0; ALUASrc = 1; ALUBSrc = 2'b10;
                    Branch = 3'b001; MemOp = 3'b000; ALUctr = 4'b0000;
                end
                5'b11001: begin
                    ExtOp = 3'b000; RegWr = 1; MemtoReg = 0; MemWr = 0; ALUASrc = 1; ALUBSrc = 2'b10;
                    Branch = 3'b010; MemOp = 3'b000; ALUctr = 4'b0000;
                end
                5'b11000: begin
                    ExtOp = 3'b011; RegWr = 0; MemtoReg = 0; MemWr = 0; ALUASrc = 0; ALUBSrc = 2'b00;
                    case (func3)
                        3'b000: Branch = 3'b100;
                        3'b001: Branch = 3'b101;
                        3'b100: Branch = 3'b110;
                        3'b101: Branch = 3'b111;
                        3'b110: Branch = 3'b110;
                        3'b111: Branch = 3'b111;
                    endcase
                    MemOp = 3'b000;
                    if (func3 == 3'b110 || func3 == 3'b111) ALUctr = 4'b0011; else ALUctr = 4'b0010;
                end
                5'b00000: begin
                    ExtOp = 3'b000; RegWr = 1; MemtoReg = 1; MemWr = 0; ALUASrc = 0; ALUBSrc = 2'b01;
                    Branch = 3'b000;
                    case (func3)
                        3'b000: MemOp = 3'b001;
                        3'b001: MemOp = 3'b010;
                        3'b010: MemOp = 3'b000;
                        3'b100: MemOp = 3'b101;
                        3'b101: MemOp = 3'b110;
                    endcase
                    ALUctr = 4'b0000;
                end
                5'b01000: begin
                    ExtOp = 3'b010; RegWr = 0; MemtoReg = 0; MemWr = 1; ALUASrc = 0; ALUBSrc = 2'b01;
                    Branch = 3'b000;
                    case (func3)
                        3'b000: MemOp = 3'b001;
                        3'b001: MemOp = 3'b010;
                        3'b010: MemOp = 3'b000;
                    endcase
                    ALUctr = 4'b0000;
                end
            endcase
        end
    end
endmodule