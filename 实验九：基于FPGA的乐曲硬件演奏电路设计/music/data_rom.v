module data_rom(sel,inclock,q);
input [1:0]sel;
input inclock;
output [4:0]q;
reg [9:0]Counter;

always @(posedge inclock)begin
	if(sel==2'b00)//zuguo
	begin
		Counter<=10'd0;
		if(Counter>=10'd320) Counter<=10'd0;
		else Counter<=Counter+1;
	end
	else if(sel==2'b01)//mama
	begin
		Counter<=10'd328;
		if(Counter>=10'd456) Counter<=10'd328;
		else Counter<=Counter+1;
	end
	else if(sel==2'b10)//little star
	begin
		Counter<=10'd464;
		if(Counter>=10'd680) Counter<=10'd464;
		else Counter<=Counter+1;
	end
	else if(sel==2'b11)//two tigers
	begin
		Counter<=10'd688;
		if(Counter>=10'd808) Counter<=10'd688;
		else Counter<=Counter+1;	
	end
end

romd1 u1(.address(Counter),.clock(inclock),.q(q));
endmodule
