 ///
//QQ:3181961725
//TEL/WX:13540738439
//作者：Mr Wang
//模块介绍：实现LED灯（D8）间隔1秒闪烁1次
///
module led_ctrl(
	input		clk		,//时钟，50MHZ
	input		rst_n	,//复位，低电平有效
	output	reg	led		 //LED灯控制信号
	);
	parameter	time_500m=12500000;//500ms
	//为了缩短仿真时间，减小了参数值，仅仅用于仿真
	//parameter	time_500m=2500;//500ms
	reg	[23:0] cnt;
	always@(posedge clk or negedge rst_n)begin
		if(!rst_n)
			cnt<=0;
		else if(cnt==time_500m-1)
			cnt<=0;
		else
			cnt<=cnt+1;
	end
	always@(posedge clk or negedge rst_n)begin
		if(!rst_n)
			led<=1;
		else if(cnt==0)
			led<=~led;
		else;
	end
endmodule

