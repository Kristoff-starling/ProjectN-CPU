module InstrMem(
    input [31:0] Addr,
    input clk,
    input InstrMemEn,
    input InstrMemWr,
    output reg [31:0] instr
);
    reg [31:0] instrmem[1023:0];
    initial begin
        $readmemh("./instr.txt", instrmem);
    end
    always @(posedge clk) begin
        if (InstrMemEn) instr <= instrmem[Addr >> 2];
    end
    always @(posedge clk) begin
        if (InstrMemEn & InstrMemWr) instrmem[Addr >> 2] <= instr;
    end
endmodule