module FA(
    output f,cout,p,g,
    input x,y,cin
);
    assign f=x^y^cin;
    assign cout= (x & y) | (x & cin) | (y & cin);
    assign g = x & y;
    assign p = x | y;
endmodule
