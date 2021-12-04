module seg(clk, data_in, a, b, c, d, e, f, g, dp, ds);

input clk;
input[3:0] data_in;

output reg [7:0] ds;
output a, b, c, d, e, f, g, dp;

reg [7:0] seg, seg0, seg1;
reg div_clk;
reg [1:0] sel;

integer count_reg;

initial count_reg = 0;
initial div_clk = 0;
initial sel = 0;

assign dp = seg[0];
assign a = seg[1];
assign b = seg[2];
assign c = seg[3];
assign d = seg[4];
assign e = seg[5];
assign f = seg[6];
assign g = seg[7];

always @(posedge clk) begin
	if (count_reg == 9999) begin //9999999
		div_clk <= !div_clk;
		count_reg <= 0;
	end
	else begin
		count_reg = count_reg + 1;
	end
end

always @(posedge div_clk) begin
	case(sel)
		0: begin 
			ds <= 8'b10111111;
			seg <= seg0;
		end
		1: begin 
			ds <= 8'b01111111;
			seg <= seg1;
		end	
	endcase
	sel = sel + 1;
end

always @(data_in) begin
	case(data_in)
		0:  begin 
			seg0 <= 8'b01111110;
			seg1 <= 8'b01111110;
		end
		1:  begin 
			seg0 <= 8'b00001100;
			seg1 <= 8'b01111110;
		end
		2:  begin 
			seg0 <= 8'b10110110;
			seg1 <= 8'b01111110;
		end
		3:  begin 
			seg0 <= 8'b10011110;
			seg1 <= 8'b01111110;
		end
		4:  begin 
			seg0 <= 8'b11001100;
			seg1 <= 8'b01111110;
		end
		5:  begin 
			seg0 <= 8'b11011010;
			seg1 <= 8'b01111110;
		end
		6:  begin 
			seg0 <= 8'b11111010;
			seg1 <= 8'b01111110;
		end
		7:  begin 
			seg0 <= 8'b00001110;
			seg1 <= 8'b01111110;
		end
		8:  begin 
			seg0 <= 8'b11111110;
			seg1 <= 8'b01111110;
		end
		9:  begin 
			seg0 <= 8'b11011110;
			seg1 <= 8'b01111110;
		end
		10: begin 
			seg0 <= 8'b01111110;
			seg1 <= 8'b00001100;
		end
		11: begin 
			seg0 <= 8'b00001100;
			seg1 <= 8'b00001100;
		end
		12:begin 
	       seg0 <= 8'b10110110;
		   seg1 <= 8'b00001100;
		end
		13:begin 
		   seg0 <= 8'b10011110;
		   seg1 <= 8'b00001100;
		end
	
	endcase
end

endmodule
