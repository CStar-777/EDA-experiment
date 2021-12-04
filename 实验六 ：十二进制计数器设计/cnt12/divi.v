module divi(clk, clk_out);

input clk;

output reg clk_out;

integer count_reg;


initial count_reg = 0;
initial clk_out = 0;

always @(posedge clk) begin
	if (count_reg == 24999999) begin //24999999
		clk_out <= !clk_out;
		count_reg <= 0;
	end
	else begin
		count_reg = count_reg + 1;
	end
end

endmodule
