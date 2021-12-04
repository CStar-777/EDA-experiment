module ToneTaba(code,Tone);
input [4:0]code;
//output reg [3:0]decode;
//output reg [1:0]HIGH;
reg [3:0]decode;
reg [1:0]HIGH;
output reg [10:0]Tone;

always@(code)begin
	case(code)
		5'b00000:Tone<=11'b11111111111;
		5'b00001:Tone<=11'd137;
		5'b00010:Tone<=11'd345;
		5'b00011:Tone<=11'd531;
		5'b00100:Tone<=11'd616;
		5'b00101:Tone<=11'd773;
		5'b00110:Tone<=11'd912;
		5'b00111:Tone<=11'd1036;
		5'b01000:Tone<=11'd1092;
		5'b01001:Tone<=11'd1197;
		5'b01010:Tone<=11'd1290;
		5'b01011:Tone<=11'd1332;
		5'b01100:Tone<=11'd1410;
		5'b01101:Tone<=11'd1480;
		5'b01110:Tone<=11'd1542;
		5'b01111:Tone<=11'd1570;
		5'b10000:Tone<=11'd1622;
		5'b10001:Tone<=11'd1668;
		5'b10010:Tone<=11'd1690;
		5'b10011:Tone<=11'd1728;
		5'b10100:Tone<=11'd1764;
		5'b10101:Tone<=11'd1795;
		default:;
	endcase
end

always@(code)begin
	reg[4:0] temp_code;
	if(code>=15)
	begin
		temp_code<=code+2;
		decode<={1'b0,temp_code[2:0]};
		HIGH<=temp_code[4:3];
	end
	else if(code>=8)
	begin
		temp_code<=code+1;
		decode<={1'b0,temp_code[2:0]};
		HIGH<=temp_code[4:3];
	end
	else
	begin
		temp_code<=code;
		decode<={1'b0,temp_code[2:0]};
		HIGH<=temp_code[4:3];
	end
end
endmodule
	