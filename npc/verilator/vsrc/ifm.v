
  module ifm(
      input wire reset,
      input wire clk,
      input wire [63:0] pc,
      output wire [31:0]inst
  
  );
  wire [63:0]rdata;
  always @(*) begin 
     //$display("----------dfas---%h",pc);
      if(reset | clk==1'b1) begin 
          
      end
      else begin 
          if(pc==64'h0)begin 
              $finish;
          end
          else pmem_read(pc, rdata);
      end
      
  end
  assign inst=(pc[2]==1'b1)?  rdata[63:32]:rdata[31:0];
  
  endmodule
