module mux31(a1,a2,a3,s0,s1,y); 
input a1,a2,a3,s0,s1;
output reg y; 
wire[1:0] sel; 
assign sel = {s1,s0};
always @(sel)
	case(sel)
	2'b00: y = a1;
	2'b01: y = a1;
	2'b10: y = a2;
	2'b11: y = a3;
	endcase
endmodule
