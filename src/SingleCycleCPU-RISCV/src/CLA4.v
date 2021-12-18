/* verilator lint_off PINMISSING */
/* verilator lint_off UNOPTFLAT */
module CLA4(
    output [3:0] f,
    output cout,
    input [3:0] x,y,
    input cin
);
    wire [4:1] p,g;
    wire [4:1] c;
    assign p=x|y;
    assign g=x&y;
    CLU4 gen(
        .c0(cin),
        .p(p),
        .g(g),
        .c(c)
    );
    genvar i;
    FA adder(
        .x(x[0]),
        .y(y[0]),
        .cin(cin),
        .f(f[0])
    );
    generate
        for (i=1;i<=3;i=i+1) begin
            FA adder(
                .x(x[i]),
                .y(y[i]),
                .cin(c[i]),
                .f(f[i])
            );
        end
    endgenerate
    assign cout = c[4];
endmodule
