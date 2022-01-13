/* verilator lint_off UNOPTFLAT */
module CLU4(
    output [4:1] c,
    input [4:1] p,g,
    input c0
);
    assign c[1]=g[1] | (p[1] & c0);
    genvar i;
    generate
        for (i=2;i<=4;i=i+1) begin
            assign c[i]=g[i] | (p[i] & c[i-1]);
        end
    endgenerate
endmodule
