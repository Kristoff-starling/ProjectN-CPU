module IF(
    input clk, rst,
    input inputPC,

    output imemaddr,
    output imemclk,
    input imemdataout,

    output currentPC,
    output currentInstr,

    input in_valid,
    input out_ready,
    output out_valid,
    output in_ready
);
    reg [31:0] PC;
    wire reg_valid_r;

    always @(negedge clk) begin
        if (receive_flag) PC <= inputPC;
    end

    assign imemaddr = PC;
    assign imemclk = clk; 

    assign currentPC = PC;
    assign currentInstr = imemdataout;

    assign reg_valid_r = (receive_flag ? 1'b1 : 1'b0);
    assign send_flag = out_valid & out_ready;
    assign receive_flag = in_valid & in_ready;
    assign out_valid = reg_valid_r & (~rst);
    assign in_ready = !reg_valid_r || (reg_valid_r && send_flag);
endmodule