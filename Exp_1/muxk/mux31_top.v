module mux31_top(a1,a2,a3,s0,s1,outy);
input a1,a2,a3,s0,s1;
output outy;
wire tmp;
mux21a U1(.a(a2),.b(a3),.s(s0),.y(tmp));
mux21a U2(.a(a1),.b(tmp),.s(s1),.y(outy));
endmodule