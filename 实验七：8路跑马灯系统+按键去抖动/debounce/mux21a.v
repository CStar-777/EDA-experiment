module mux21a(a,b,s,y);
input [3:0]a,b;
input s;
output reg [3:0]y;

always@(s)begin
	if(s==0)
		y<=a;
	else
		y<=b;
end

endmodule
