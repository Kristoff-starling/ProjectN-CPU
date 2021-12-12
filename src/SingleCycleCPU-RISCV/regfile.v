module regfile(
    input clk,
    input [4:0] ra,
    input [4:0] rb,
    input [4:0] rw,
    input [31:0] busw,
    input we,
    output reg [31:0] busa,
    output reg [31:0] busb,
    output [31:0] x0, x1, x2, x3, x4, x5, x6, x7,
    output [31:0] x8, x9, x10, x11, x12, x13, x14, x15,
    output [31:0] x16, x17, x18, x19, x20, x21, x22, x23,
    output [31:0] x24, x25, x26, x27, x28, x29, x30, x31
);
    reg [31:0] registers[31:0]; integer i;
    initial begin
        for (i = 0; i <= 31; i = i + 1) registers[i] = 0;
    end
    always @(*) begin
        busa = registers[ra];
        busb = registers[rb];
    end
    always @(negedge clk) begin
        if (we && rw) registers[rw] <= busw;
    end
    assign x0 = registers[0]; assign x1 = registers[1]; assign x2 = registers[2]; assign x3 = registers[3];
    assign x4 = registers[4]; assign x5 = registers[5]; assign x6 = registers[6]; assign x7 = registers[7];
    assign x8 = registers[8]; assign x9 = registers[9]; assign x10 = registers[10]; assign x11 = registers[11];
    assign x12 = registers[12]; assign x13 = registers[13]; assign x14 = registers[14]; assign x15 = registers[15];
    assign x16 = registers[16]; assign x17 = registers[17]; assign x18 = registers[18]; assign x19 = registers[19];
    assign x20 = registers[20]; assign x21 = registers[21]; assign x22 = registers[22]; assign x23 = registers[23];
    assign x24 = registers[24]; assign x25 = registers[25]; assign x26 = registers[26]; assign x27 = registers[27];
    assign x28 = registers[28]; assign x29 = registers[29]; assign x30 = registers[30]; assign x31 = registers[31];
endmodule
