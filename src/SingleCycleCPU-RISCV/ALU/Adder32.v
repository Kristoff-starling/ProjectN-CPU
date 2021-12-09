module Adder32(
    output [31:0] f,
    output cout,
    input [31:0] x,y,
    input sub
);
    parameter t=32;
    wire [3:0] Gg,Pg;
    wire [7:0] p[3:0],g[3:0];
    wire [4:0] c;
    wire [3:0] cout_temp;
    genvar i;
    generate
        for (i=0;i<=3;i=i+1) begin
            assign p[i]=x[i*8+7:i*8] | y[i*8+7:i*8];
            assign g[i]=x[i*8+7:i*8] & y[i*8+7:i*8];
            assign Pg[i] = (p[i]==8'hff ? 1 : 0);
            assign Gg[i] = g[i][7] | (p[i][7] & g[i][6]) | (p[i][7] & p[i][6] & g[i][5]) | (p[i][7] & p[i][6] & p[i][5] & g[i][4]) 
            | (p[i][7] & p[i][6] & p[i][5] & p[i][4] & g[i][3]) | (p[i][7] & p[i][6] & p[i][5] & p[i][4] & p[i][3] & g[i][2]) | 
            (p[i][7] & p[i][6] & p[i][5] & p[i][4] & p[i][3] & p[i][2] & g[i][1]) | (p[i][7] & p[i][6] & p[i][5] & p[i][4] & p[i][3] & p[i][2] & p[i][1] & p[i][0] & g[i][0]);
        end
    endgenerate
    CLU4 gen(
        .p(Pg),
        .g(Gg),
        .c0(sub),
        .c(c[4:1])
    );
    assign c[0]=sub;
    generate
        for (i=0;i<=3;i=i+1) begin
            CLA8 adder(
                .x(x[i*8+7:i*8]),
                .y(y[i*8+7:i*8]),
                .cin(c[i]),
                .cout(cout_temp[i]),
                .f(f[i*8+7:i*8])
            );
        end
    endgenerate
    assign cout = cout_temp[3];
endmodule
