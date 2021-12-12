module DataMem(
  input clk,
  input WrEn,
  input MemEn,
  input [31:0] DataIn,
  input [2:0] MemOp,
  input [31:0] Addr,
  input WriteToFile,
  output reg [31:0] DataOut,
  output [7:0] d0, d1, d2, d3, d4, d5, d6, d7
);
    reg [7:0] datamem [4095:0]; integer i;
    initial begin
        $readmemh("./data.txt", datamem);
    end
    always @(*)
        case(MemOp)
          3'b000: DataOut = {datamem[Addr + 3], datamem[Addr + 2], datamem[Addr + 1], datamem[Addr]};
          3'b001: DataOut = {{24{datamem[Addr][7]}}, datamem[Addr]};
          3'b010: DataOut = {{16{datamem[Addr + 1][7]}}, datamem[Addr + 1], datamem[Addr]};
          3'b101: DataOut = {24'h000000, datamem[Addr]};
          3'b110: DataOut = {16'h0000, datamem[Addr + 1], datamem[Addr]};
        endcase
    always @(posedge clk) begin
        if(WrEn && MemEn) begin
            case(MemOp)
              3'b000: {datamem[Addr + 3], datamem[Addr + 2], datamem[Addr + 1], datamem[Addr]} <= DataIn;
              3'b001: datamem[Addr] <= DataIn[7:0];
              3'b010: {datamem[Addr+1] , datamem[Addr]} <= DataIn[15:0];
            endcase
        end
    end
    always @(posedge clk) begin
        if (WriteToFile) $writememh("./dataout.txt", datamem, 0, 43);
    end

    assign d0 = datamem[0];
    assign d1 = datamem[1];
    assign d2 = datamem[2];
    assign d3 = datamem[3];
    assign d4 = datamem[4];
    assign d5 = datamem[5];
    assign d6 = datamem[6];
    assign d7 = datamem[7];
endmodule