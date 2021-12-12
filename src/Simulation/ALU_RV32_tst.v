`timescale 1ns / 1ns

module ALU_RV32_tst();
    reg [31:0] da, db;
    reg [3:0] aluctr;
    wire zero;
    wire [31:0] result;
    ALU_RV32 ALU_impl(.da(da), .db(db), .aluctr(aluctr), .zero(zero), .result(result));
    initial begin
        aluctr = 4'b0000;
        da = 32'h0000001f; db = 32'h0000002e; #10;
        aluctr = 4'b0001;
        da = 32'h0000cdef; db = 32'h00000004; #10;
        aluctr = 4'b0010;
        da = 32'hffffffff; db = 32'h00000001; #10;
        aluctr = 4'b0011; #10;
        aluctr = 4'b0100;
        da = 32'h00ffee00; db = 32'h00ff00cc; #10;
        aluctr = 4'b0101;
        da = 32'hfe000000; db = 32'h00000004; #10;
        aluctr = 4'b0110;
        da = 32'h00ffee00; db = 32'h0000eeff; #10;
        aluctr = 4'b0111;
        da = 32'h00ffee00; db = 32'h00f000ff; #10;
        aluctr = 4'b1000;
        da = 32'h00000001; db = 32'h00000002; #10;
        aluctr = 4'b1101;
        da = 32'hfe000000; db = 32'h00000004; #10;
        $finish;
    end
endmodule