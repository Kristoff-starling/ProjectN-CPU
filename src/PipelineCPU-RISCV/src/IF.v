module IF(
    input clk, rst, flush, block,
    input [31:0] inputPC,

    output [31:0] imemaddr,
    output imemclk,
    input [31:0] imemdataout,

    output [31:0] currentPC,
    output [31:0] snPC,
    output [31:0] currentInstr,

    input in_valid,
    input out_ready,
    output out_valid,
    output in_ready
);
    reg [31:0] PC;
    reg reg_valid_r;

    wire cout, receive_flag, send_flag;

    always @(negedge clk) begin
        reg_valid_r <= 1;
        // if (rst) reg_valid_r <= 0;
        // else reg_valid_r <= (receive_flag || (reg_valid_r && !send_flag)) ? 1 : 0;
        if (receive_flag) begin
            PC <= inputPC;
            // $display("IF's PC: %h", inputPC);
        end
    end

    Adder32 snpc_gen (
        .sub(0),
        .x(PC), .y(32'h00000004),
        .result(snPC),
        .cout(cout)
    );

    assign imemaddr = PC;
    assign imemclk = clk; 

    assign currentPC = PC;
    assign currentInstr = imemdataout;

    // assign reg_valid_r = ~flush;
    assign send_flag = out_valid & out_ready;
    assign receive_flag = in_valid & in_ready;
    assign out_valid = reg_valid_r & (~block) & (~flush) & (~rst);
    assign in_ready = 1;
    // assign in_ready = !reg_valid_r || (reg_valid_r && send_flag);
    // always @(out_valid, in_ready) begin
    // $display("IF's out_valid: %b", out_valid);
    // $display("IF's in_ready: %b", in_ready);
    // end
endmodule