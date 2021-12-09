module regfile(
    input clk,
    input [4:0] ra,
    input [4:0] rb,
    input [4:0] rw,
    input [31:0] busw,
    input we,
    output reg [31:0] busa,
    output reg [31:0] busb
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
endmodule
