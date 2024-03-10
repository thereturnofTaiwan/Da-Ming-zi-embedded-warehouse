module mux2_1
(
    input wire [0:0] in_1,  //[0:0]一位宽
    input wire       in_2,
    input wire       sel ,

    output reg       out
);

always @(*)      //星号表示在组合逻辑中任何信号的变换都会运行always
    if(sel == 1'b1)
        out = in_1;
    else
        out = in_2;
endmodule    