module EX (
    input clk, flush,
    input [31:0] in_busa, in_busb,
    input [4:0] in_rw,
    input [31:0] in_PC,
    input [31:0] in_imm,
    input [2:0] in_Branch,
    input [1:0] in_ALUBSrc,
    input [3:0] in_ALUctr,
    input [2:0] in_MemOp,
    input in_RegWr, in_MemtoReg, in_ALUASrc, in_MemWr,
    input in_done,

    output zero,
    output [31:0] result,
    output [31:0] currentPC,
    output [31:0] imm,
    output [31:0] busa, busb,
    output [4:0] rw,
    output [2:0] Branch,
    output [2:0] MemOp,
    output RegWr, MemtoReg, MemWr,
    output done,

    input in_valid,
    input out_ready,
    output out_valid,
    output in_ready
);
    reg reg_valid_r;
    reg [31:0] reg_PC, reg_imm, reg_busa, reg_busb;
    reg [4:0] reg_rw;
    reg [2:0] reg_Branch;
    reg [1:0] reg_ALUBSrc;
    reg [3:0] reg_ALUctr;
    reg [2:0] reg_MemOp;
    reg reg_RegWr, reg_MemtoReg, reg_ALUASrc, reg_MemWr;
    reg reg_done;

    wire receive_flag, send_flag;

    always @(negedge clk) begin
        // $display("%h!!", receive_flag);
        if (flush) reg_valid_r <= 0;
        else reg_valid_r <= (receive_flag || (reg_valid_r && !send_flag)) ? 1 : 0;
        if (receive_flag) begin
            reg_PC          <= in_PC;
            reg_imm         <= in_imm;
            reg_busa        <= in_busa;
            reg_busb        <= in_busb;
            reg_rw          <= in_rw;
            reg_Branch      <= in_Branch;
            reg_ALUBSrc     <= in_ALUBSrc;
            reg_ALUctr      <= in_ALUctr;
            reg_MemOp       <= in_MemOp;
            reg_RegWr       <= in_RegWr;
            reg_MemtoReg    <= in_MemtoReg;
            reg_ALUASrc     <= in_ALUASrc;
            reg_MemWr       <= in_MemWr;
            reg_done        <= in_done;
            // $display("EX's PC: %h", in_PC);
            // $display("EX's imm: %h", in_imm);
            // $display("EX's ALUBSrc: %h", in_ALUBSrc);
            // $display("EX's ALUASrc: %h", in_ALUASrc);
            // $display("EX's a b: %h %h", in_busa, in_busb);
            // $display("EX's ALUctr: %h", in_ALUctr);
        end
        // $display("EX's receive_flag: %b", receive_flag);
    end

    // always @(reg_PC)
    // $display("EX's reg_PC: %h", reg_PC);

    wire [31:0] ALUa, ALUb;

    assign ALUa = (reg_ALUASrc == 1 ? reg_PC : reg_busa);
    assign ALUb = (reg_ALUBSrc == 2'b00) ? reg_busb : ((reg_ALUBSrc == 2'b01) ? reg_imm : 32'h00000004);

    ALU_RV32 ALU(
        .da(ALUa),
        .db(ALUb),
        .aluctr(reg_ALUctr),
        .result(result),
        .zero(zero)
    );

    // always @(result)
    // $display("EX's ALU: %h %h %h", result, ALUa, ALUb);

    assign currentPC = reg_PC;
    assign Branch = reg_Branch;
    assign MemOp = reg_MemOp;
    assign RegWr = reg_RegWr;
    assign MemtoReg = reg_MemtoReg;
    assign MemWr = reg_MemWr;
    assign imm = reg_imm;
    assign busa = reg_busa;
    assign busb = reg_busb;
    assign rw = reg_rw;
    assign done = reg_done;

    assign send_flag = out_valid & out_ready;
    assign receive_flag = in_valid & in_ready;
    assign out_valid = reg_valid_r & (~flush);
    assign in_ready = !reg_valid_r || (reg_valid_r && send_flag);

    // always @(in_ready, receive_flag) begin
    // $display("EX's in_ready: %h", in_ready);
    // $display("EX's receive_flag: %b", receive_flag);
    // $display("EX's nxtPC: %h", in_PC);
    // end

endmodule