module dvf(clk_in,data_in,div_clk);
input clk_in;
input [3:0]data_in;
output reg div_clk;

reg[3:0]m;

always@(posedge clk_in)
	if(m==data_in)
	begin
		div_clk<=~div_clk;
		m<=4'd0;
	end
	else
	begin
		m<=m+4'd1;
	end
endmodule
