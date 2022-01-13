module WB(
    input clk, rst, flush,
    input MemtoReg,
    input RegWr,
    input done,
    input [4:0] Rd,
    input [31:0] Do,
    input [31:0] ALUout,
    input [31:0] currentPC,
    output reg [31:0] Di,
    output reg WE,
    output reg [4:0] Rw,
    output reg wb,
    output reg done_o,
    output reg [31:0] PC_o,
    input in_valid,
    // input out_ready,
    output in_ready
    // output out_valid
);
    reg reg_valid_r;
    wire receive_flag, send_flag;
    assign send_flag = 1;
    assign receive_flag = in_valid & in_ready;
    // assign out_valid = reg_valid_r;
    // assign in_ready = !reg_valid_r || (reg_valid_r && send_flag);
    assign in_ready = 1'b1;
    
    always @(negedge clk) begin
        if (rst) reg_valid_r <= 1'b0;
        else reg_valid_r <= (receive_flag || (reg_valid_r && !send_flag)) ? 1 : 0;
        if (receive_flag) begin
            reg_valid_r <= 1'b1;
            Di <= (MemtoReg) ? Do : ALUout;
            WE <= RegWr & (~done);
            Rw <= Rd;
            wb <= 1'b1;
            done_o <= done;
            PC_o <= currentPC;
        end
        else begin
            WE <= 1'b0;
            wb <= 1'b0;
        end
    end

endmodule
