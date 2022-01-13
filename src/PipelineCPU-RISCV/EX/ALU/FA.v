module FA(
    output f,cout,
    input x,y,cin
);
    assign f= x ^ y ^ cin;
    assign cout= (x & y) | (x & cin) | (y & cin);
endmodule
