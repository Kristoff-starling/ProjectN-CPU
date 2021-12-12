`timescale 1ns / 1ns

module SingleCycleCPU_tst();
    reg clk;
    reg rst;
    /*
    reg [2:0] ExtOp;
    reg RegWr;
    reg ALUASrc;
    reg [1:0] ALUBSrc;
    reg [3:0] ALUctr;
    reg [2:0] MemOp;
    reg MemtoReg;
    reg MemWr;
    reg [2:0] Branch;
    */
    wire [31:0] nxtPC;
    wire [31:0] alures;
    wire done;
    SingleCycleCPU CPU_impl(
        .clk(clk),
        .rst(rst),
        /*
        .ExtOp(ExtOp),
        .RegWr(RegWr),
        .ALUASrc(ALUASrc),
        .ALUBSrc(ALUBSrc),
        .ALUctr(ALUctr),
        .MemOp(MemOp),
        .MemtoReg(MemtoReg),
        .MemWr(MemWr),
        .Branch(Branch),
        */
        .nxtPC(nxtPC),
        .alures(alures),
        .done(done)
    );
    always #5 clk = ~clk;
    initial begin
        $dumpfile("./build/wave.vcd");
        $dumpvars(0, SingleCycleCPU_tst);
        clk = 1;
        rst = 1;
        #10;
        rst = 0;
        // lw, x11, 0(x0)
        /*
        ExtOp = 3'b000;
        Branch = 3'b000;
        RegWr = 1;
        MemWr = 0;
        MemOp = 3'b000;
        MemtoReg = 1;
        ALUctr = 4'b0000;
        ALUASrc = 0;
        ALUBSrc = 2'b01;
        */
        // ori x11, x0, 1
        /*
        ExtOp = 3'b000;
        RegWr = 1;
        ALUASrc = 0;
        ALUBSrc = 2'b01;
        ALUctr = 4'b0110;
        MemOp = 0;
        MemtoReg = 0;
        MemWr = 0;
        Branch = 3'b000;
        */
        forever begin
            #10;
            if (done) $finish;
        end
    end
endmodule
