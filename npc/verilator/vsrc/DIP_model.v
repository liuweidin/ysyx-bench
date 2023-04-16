//import "DPI-C" function void ebreak();

import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);

import "DPI-C" function void set_pc(input logic [31:0] inst[]);

module DIP_model(input wire is_break,
input wire [31:0] inst,
input wire [63:0]rf_0,
input wire [63:0]rf_1,
input wire [63:0]rf_2,
input wire [63:0]rf_3,
input wire [63:0]rf_4,
input wire [63:0]rf_5,
input wire [63:0]rf_6,
input wire [63:0]rf_7,
input wire [63:0]rf_8,
input wire [63:0]rf_9,
input wire [63:0]rf_10,
input wire [63:0]rf_11,
input wire [63:0]rf_12,
input wire [63:0]rf_13,
input wire [63:0]rf_14,
input wire [63:0]rf_15,
input wire [63:0]rf_16,
input wire [63:0]rf_17,
input wire [63:0]rf_18,
input wire [63:0]rf_19,
input wire [63:0]rf_20,
input wire [63:0]rf_21,
input wire [63:0]rf_22,
input wire [63:0]rf_23,
input wire [63:0]rf_24,
input wire [63:0]rf_25,
input wire [63:0]rf_26,
input wire [63:0]rf_27,
input wire [63:0]rf_28,
input wire [63:0]rf_29,
input wire [63:0]rf_30,
input wire [63:0]rf_31,
input wire inst_valid,
input wire [63:0]pc

);

always @(*) begin 
    if(is_break==1'b1) begin 
        //ebreak();
        $finish;
    end

end


wire [63:0]rf[31:0];

assign rf[0]=rf_0;
assign rf[1]=rf_1;
assign rf[2]=rf_2;
assign rf[3]=rf_3;
assign rf[4]=rf_4;
assign rf[5]=rf_5;
assign rf[6]=rf_6;
assign rf[7]=rf_7;
assign rf[8]=rf_8;
assign rf[9]=rf_9;
assign rf[10]=rf_10;
assign rf[11]=rf_11;
assign rf[12]=rf_12;
assign rf[13]=rf_13;
assign rf[14]=rf_14;
assign rf[15]=rf_15;
assign rf[16]=rf_16;
assign rf[17]=rf_17;
assign rf[18]=rf_18;
assign rf[19]=rf_19;
assign rf[20]=rf_20;
assign rf[21]=rf_21;
assign rf[22]=rf_22;
assign rf[23]=rf_23;
assign rf[24]=rf_24;
assign rf[25]=rf_25;
assign rf[26]=rf_26;
assign rf[27]=rf_27;
assign rf[28]=rf_28;
assign rf[29]=rf_29;
assign rf[30]=rf_30;
assign rf[31]=rf_31;
wire [31:0]IN[3:0];
assign IN[0]=inst;
assign IN[1]=pc[31:0];
assign IN[2]=pc[63:32];
assign IN[3]={31'h0,inst_valid};

initial begin 
set_pc(IN);
set_gpr_ptr(rf);  // rf为通用寄存器的二维数组变量

end

endmodule 
