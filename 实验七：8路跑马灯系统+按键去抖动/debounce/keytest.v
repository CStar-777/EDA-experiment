module keytest(
input clk,
input key_in,
input rst_n,
output reg key_out
);
reg key_in_dly;
reg [19:0] cnt;
wire change;
parameter jitter = 20'h2C1F2;
// 检测key信号变化，使用原信号+dly
always @(posedge clk or negedge rst_n)
	if(!rst_n) 
		key_in_dly <= 0;
	else 
		key_in_dly <= key_in;

assign change = (key_in & !key_in_dly)|(!key_in & key_in_dly);

// 当没有变化时，计数器才工作，否则复位重新计数
always @(posedge clk or negedge rst_n)
	if(!rst_n) 
		cnt <= 20'h0;
	else if(change) 
		cnt <= 20'h0;
	else 
		cnt <= cnt + 1;
//  输出判断
always @(posedge clk or negedge rst_n)
// key_out = 1 为未按下
	if(!rst_n) 
		key_out <= 1;
	else if(cnt == 20'h30000 - 1) 
		key_out <= key_in;
	else 
		key_out <= key_out;
endmodule

//module keytest (clk,rst,keyin,keyout);
//input clk,rst;
//input keyin;
//output reg keyout;
//
//reg key1;
//reg key2;
//reg flag;
//reg filter_flag;
//reg [25:0] cnt;
//parameter T = 3000000;//60*50Mhz
//
////key1,key2
//always@(posedge clk or posedge rst)begin
//if (rst)
//	begin
//		key1<=0;
//		key2<=0;
//	end
//else
//	begin
//		key1<=keyin;
//		key2<=key1;
//	end
//end
////flag
//always@(posedge clk or posedge rst)begin
//if (rst)
//	flag<=0;
//else if (key1==0&&key2==1)
//	flag<=1;
//else
//	flag<=0;
//end
////filter_flag
//always@(posedge clk or posedge rst)begin
//if (rst)
//	filter_flag<=0;
//else if (flag)
//	filter_flag<=1;
//else if (cnt==T)
//	filter_flag<=0;
//else 
//	filter_flag<=filter_flag;
//end
////cnt&keyout
//always@(posedge clk or posedge rst)begin
//if (rst)
//	cnt<=0;
//else if (keyin==1)
//	cnt<=0;
//else if (cnt==T)
//	begin
//		keyout<=1;
//		cnt<=0;
//	end
//else if (filter_flag)
//	cnt<=cnt+1;
//else 
//	keyout<=0;
//end
//
//endmodule
