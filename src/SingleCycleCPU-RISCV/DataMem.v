module DataMem(
  input clk,
  input WrEn,
  input MemEn,
  input [31:0] DataIn,
  input [2:0] MemOp,
  input [31:0] Addr,
  output reg [31:0] DataOut
);
    reg [7:0] datamem [4095:0];
    initial begin
        $readmemh("./data.txt", datamem);
    end
    always@(*)
        case(MemOp)
          3'b000: DataOut = {datamem[Addr+3],datamem[Addr+2],datamem[Addr+1],datamem[Addr]};
          3'b001: DataOut = {{24{datamem[Addr][7]}},datamem[Addr]};
          3'b010: DataOut = {{16{datamem[Addr+1][7]}},datamem[Addr+1],datamem[Addr]};
          3'b101: DataOut = {24'h000000,datamem[Addr]};
          3'b110: DataOut = {16'h0000,datamem[Addr+1],datamem[Addr]};
        endcase
    integer i;
    always@(posedge clk) begin
        if(WrEn && MemEn) begin
            case(MemOp)
              3'b000: {datamem[Addr+3],datamem[Addr+2],datamem[Addr+1],datamem[Addr]}<=DataIn;
              3'b001: datamem[Addr]<=DataIn[7:0];
              3'b010: {datamem[Addr+1],datamem[Addr]}<=DataIn[15:0];
            endcase
            $writememh("./dataout.txt", datamem, 0, 43);
        end
    end
endmodule