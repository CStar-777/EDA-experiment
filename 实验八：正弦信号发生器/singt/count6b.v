//6bit
module cnt6(clk,q);
input clk;
output reg[5:0]q;
initial begin
	q <= 0;
	end
always@(posedge clk)
	begin
		q = q + 1;
	end
endmodule
