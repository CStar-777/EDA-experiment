module divi_250hz(clk,divi_250hz);
input clk;
output reg divi_250hz;
reg [17:0] count_reg1;
always@(posedge clk)
begin
if(count_reg1==18'd199999)
begin
divi_250hz<=~divi_250hz;
count_reg1<=18'd0;
end
else
begin
count_reg1<=count_reg1+18'd1;
end
end
endmodule