 ///
//QQ:3181961725
//TEL/WX:13540738439
//作者：Mr Wang
`timescale 1ns/1ns
module led_ctrl_tb;
	reg	clk;
	reg	rst_n;
	initial
		begin
			clk=0;
			rst_n=0;//生成复位激励信号
			#1000
			rst_n=1;//生成复位激励信号
		end
	//生成时钟激励信号
	always #10 clk<=~clk;
	//例化被仿真模块
	led_ctrl Uled_ctrl(
	.clk		(clk	),
	.rst_n		(rst_n	),
	.led        (		)
	);
endmodule

