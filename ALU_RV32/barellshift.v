`timescale 1ns / 1ps

module barellshift(
    input [31:0] din,
    input [4:0] shamt,
    input AL,
    input LR,
    output reg [31:0] dout
);
    wire sgn; assign sgn = (AL == 1) ? din[31] : 0;
    integer i;
    always @(*) begin
        if (LR == 0) begin // left shift
            for (i = 0; i <= 31; i = i + 1) begin
                if (i >= shamt) dout[i] = din[i - shamt]; else dout[i] = 0;
            end
        end
        else begin // right shift 
            for (i = 0; i <= 31; i= i + 1) begin
                if (i >= 32 - shamt) dout[i] = sgn; else dout[i] = din[i + shamt];
            end
        end
    end
endmodule
