// Copyright (C) 1991-2009 Altera Corporation
// Your use of Altera Corporation's design tools, logic functions 
// and other software and tools, and its AMPP partner logic 
// functions, and any output files from any of the foregoing 
// (including device programming or simulation files), and any 
// associated documentation or information are expressly subject 
// to the terms and conditions of the Altera Program License 
// Subscription Agreement, Altera MegaCore Function License 
// Agreement, or other applicable license agreement, including, 
// without limitation, that your use is for the sole purpose of 
// programming logic devices manufactured by Altera and sold by 
// Altera or its authorized distributors.  Please refer to the 
// applicable agreement for further details.

// PROGRAM		"Quartus II 64-Bit"
// VERSION		"Version 9.0 Build 132 02/25/2009 SJ Full Version"
// CREATED ON	"Sun Sep 26 14:55:39 2021"

module decoder24(en,g2,g1,m0,m1,m2,m3);

input	en;
input	g2;
input	g1;
output	m0;
output	m1;
output	m2;
output	m3;

wire	SYNTHESIZED_WIRE_8;
wire	SYNTHESIZED_WIRE_9;
wire	SYNTHESIZED_WIRE_4;
wire	SYNTHESIZED_WIRE_5;
wire	SYNTHESIZED_WIRE_6;
wire	SYNTHESIZED_WIRE_7;

assign	SYNTHESIZED_WIRE_4 = SYNTHESIZED_WIRE_8 & SYNTHESIZED_WIRE_9;
assign	SYNTHESIZED_WIRE_5 = SYNTHESIZED_WIRE_8 & g1;
assign	SYNTHESIZED_WIRE_6 = g2 & SYNTHESIZED_WIRE_9;
assign	SYNTHESIZED_WIRE_7 = g2 & g1;
assign	SYNTHESIZED_WIRE_8 =  ~g2;
assign	SYNTHESIZED_WIRE_9 =  ~g1;
assign	m0 = en & SYNTHESIZED_WIRE_4;
assign	m1 = en & SYNTHESIZED_WIRE_5;
assign	m2 = en & SYNTHESIZED_WIRE_6;
assign	m3 = en & SYNTHESIZED_WIRE_7;

endmodule
