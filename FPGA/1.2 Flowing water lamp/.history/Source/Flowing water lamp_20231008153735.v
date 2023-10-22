module Flowing water lamp(
    input             rst_n , //复位信号，低电平有效
    input             clk   , //时钟信号，25MHZ
    output reg [7:0]; led   , //LED灯控制信号  8位位宽
    );
    parameter time_100ms = 2500000;  //100ms
    parameter IDLE       = 4'd0;     //初始状态
    parameter S0         = 4'd1;     //点亮第一个LED灯
    parameter S1         = 4'd2;     //点亮第二个LED灯
    parameter S2         = 4'd3;     //点亮第三个LED灯
    parameter S3         = 4'd4;     //点亮第四个LED灯
    parameter S4         = 4'd5;     //点亮第五个LED灯
    parameter S5         = 4'd6;     //点亮第六个LED灯
    parameter S6         = 4'd7;     //点亮第七个LED灯
    parameter S7         = 4'd8;     //点亮第八个LED灯
    parameter S8         = 4'd9;     //LED灯全部熄灭
    reg [3:0]   cuur_st;
    reg [24:0]  led0_cnt,led1_cnt,led2_cnt,led3_cnt;
    reg [24:0]  led4_cnt,led5_cnt,led6_cnt,led7_cnt;
    reg [24:0]  all_off_cnt;
//状态机跳转
always @(posedge clk or negedge rst_n) begin
    if(!rst_n)
        cuur_st<=IDLE;
    else case (cuur_st)
        : 
        default: 
    endcase    
end






endmodule
