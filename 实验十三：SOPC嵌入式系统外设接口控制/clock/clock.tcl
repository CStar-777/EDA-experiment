# Copyright (C) 1991-2009 Altera Corporation
# Your use of Altera Corporation's design tools, logic functions 
# and other software and tools, and its AMPP partner logic 
# functions, and any output files from any of the foregoing 
# (including device programming or simulation files), and any 
# associated documentation or information are expressly subject 
# to the terms and conditions of the Altera Program License 
# Subscription Agreement, Altera MegaCore Function License 
# Agreement, or other applicable license agreement, including, 
# without limitation, that your use is for the sole purpose of 
# programming logic devices manufactured by Altera and sold by 
# Altera or its authorized distributors.  Please refer to the 
# applicable agreement for further details.

# Quartus II: Generate Tcl File for Project
# File: clock.tcl
# Generated on: Fri Nov 30 00:35:14 2018

# Load Quartus II Tcl Project package
package require ::quartus::project

set need_to_close_project 0
set make_assignments 1

# Check that the right project is open
if {[is_project_open]} {
	if {[string compare $quartus(project) "clock"]} {
		puts "Project clock is not open"
		set make_assignments 0
	}
} else {
	# Only open if not already open
	if {[project_exists clock]} {
		project_open -revision clock clock
	} else {
		project_new -revision clock clock
	}
	set need_to_close_project 1
}

# Make assignments
if {$make_assignments} {
	set_global_assignment -name FAMILY "Cyclone III"
	set_global_assignment -name DEVICE EP3C55F484I7
	set_global_assignment -name ORIGINAL_QUARTUS_VERSION 9.0
	set_global_assignment -name PROJECT_CREATION_TIME_DATE "19:42:49  OCTOBER 11, 2017"
	set_global_assignment -name LAST_QUARTUS_VERSION 9.0
	set_global_assignment -name USE_GENERATED_PHYSICAL_CONSTRAINTS OFF -section_id eda_blast_fpga
	set_global_assignment -name MIN_CORE_JUNCTION_TEMP 0
	set_global_assignment -name MAX_CORE_JUNCTION_TEMP 85
	set_global_assignment -name NOMINAL_CORE_SUPPLY_VOLTAGE 1.2V
	set_global_assignment -name QIP_FILE nioscpu.qip
	set_global_assignment -name MISC_FILE "D:/clock/clock.dpf"
	set_global_assignment -name QIP_FILE pll.qip
	set_global_assignment -name BDF_FILE clock.bdf
	set_global_assignment -name PARTITION_NETLIST_TYPE SOURCE -section_id Top
	set_global_assignment -name PARTITION_COLOR 16764057 -section_id Top
	set_global_assignment -name LL_ROOT_REGION ON -section_id "Root Region"
	set_global_assignment -name LL_MEMBER_STATE LOCKED -section_id "Root Region"
	set_global_assignment -name RESERVE_ALL_UNUSED_PINS_WEAK_PULLUP "AS INPUT TRI-STATED"
	set_global_assignment -name STRATIX_DEVICE_IO_STANDARD "2.5 V"
	set_global_assignment -name DEVICE_FILTER_PACKAGE FBGA
	set_global_assignment -name DEVICE_FILTER_PIN_COUNT 484
	set_global_assignment -name DEVICE_FILTER_SPEED_GRADE 7
	set_instance_assignment -name PARTITION_HIERARCHY root_partition -to | -section_id Top
	set_location_assignment PIN_AB15 -to button[0]
	set_location_assignment PIN_AA16 -to button[1]
	set_location_assignment PIN_AB19 -to button[2]
	set_location_assignment PIN_W19 -to button[3]
	set_location_assignment PIN_U19 -to button[4]
	set_location_assignment PIN_AA22 -to button[5]
	set_location_assignment PIN_W21 -to button[6]
	set_location_assignment PIN_V21 -to button[7]
	set_location_assignment PIN_T2 -to clk_sys
	set_location_assignment PIN_H21 -to flash_addr[0]
	set_location_assignment PIN_L21 -to flash_addr[10]
	set_location_assignment PIN_H17 -to flash_addr[11]
	set_location_assignment PIN_H18 -to flash_addr[12]
	set_location_assignment PIN_K19 -to flash_addr[13]
	set_location_assignment PIN_J21 -to flash_addr[14]
	set_location_assignment PIN_H20 -to flash_addr[15]
	set_location_assignment PIN_B17 -to flash_addr[16]
	set_location_assignment PIN_D17 -to flash_addr[17]
	set_location_assignment PIN_C17 -to flash_addr[18]
	set_location_assignment PIN_G18 -to flash_addr[19]
	set_location_assignment PIN_A17 -to flash_addr[1]
	set_location_assignment PIN_K18 -to flash_addr[20]
	set_location_assignment PIN_J18 -to flash_addr[21]
	set_location_assignment PIN_C19 -to flash_addr[2]
	set_location_assignment PIN_D20 -to flash_addr[3]
	set_location_assignment PIN_A19 -to flash_addr[4]
	set_location_assignment PIN_B19 -to flash_addr[5]
	set_location_assignment PIN_J22 -to flash_addr[6]
	set_location_assignment PIN_K21 -to flash_addr[7]
	set_location_assignment PIN_H19 -to flash_addr[8]
	set_location_assignment PIN_L22 -to flash_addr[9]
	set_location_assignment PIN_D19 -to flash_data[0]
	set_location_assignment PIN_E21 -to flash_data[10]
	set_location_assignment PIN_D21 -to flash_data[11]
	set_location_assignment PIN_C21 -to flash_data[12]
	set_location_assignment PIN_B21 -to flash_data[13]
	set_location_assignment PIN_C20 -to flash_data[14]
	set_location_assignment PIN_A20 -to flash_data[15]
	set_location_assignment PIN_B22 -to flash_data[1]
	set_location_assignment PIN_C22 -to flash_data[2]
	set_location_assignment PIN_F19 -to flash_data[3]
	set_location_assignment PIN_D22 -to flash_data[4]
	set_location_assignment PIN_E22 -to flash_data[5]
	set_location_assignment PIN_F22 -to flash_data[6]
	set_location_assignment PIN_F20 -to flash_data[7]
	set_location_assignment PIN_F21 -to flash_data[8]
	set_location_assignment PIN_F15 -to flash_data[9]
	set_location_assignment PIN_M16 -to flash_nCS
	set_location_assignment PIN_A18 -to flash_nRE
	set_location_assignment PIN_H22 -to flash_nWE
	set_location_assignment PIN_U12 -to led[0]
	set_location_assignment PIN_V12 -to led[1]
	set_location_assignment PIN_V15 -to led[2]
	set_location_assignment PIN_W13 -to led[3]
	set_location_assignment PIN_W15 -to led[4]
	set_location_assignment PIN_Y17 -to led[5]
	set_location_assignment PIN_R16 -to led[6]
	set_location_assignment PIN_T17 -to led[7]
	set_location_assignment PIN_T22 -to reset
	set_location_assignment PIN_M1 -to sdram_CKE
	set_location_assignment PIN_M4 -to sdram_DQM[0]
	set_location_assignment PIN_M5 -to sdram_DQM[1]
	set_location_assignment PIN_V5 -to sdram_addr[0]
	set_location_assignment PIN_V3 -to sdram_addr[10]
	set_location_assignment PIN_AA4 -to sdram_addr[11]
	set_location_assignment PIN_R5 -to sdram_addr[1]
	set_location_assignment PIN_P5 -to sdram_addr[2]
	set_location_assignment PIN_N5 -to sdram_addr[3]
	set_location_assignment PIN_N6 -to sdram_addr[4]
	set_location_assignment PIN_M3 -to sdram_addr[5]
	set_location_assignment PIN_P4 -to sdram_addr[6]
	set_location_assignment PIN_T5 -to sdram_addr[7]
	set_location_assignment PIN_V4 -to sdram_addr[8]
	set_location_assignment PIN_Y3 -to sdram_addr[9]
	set_location_assignment PIN_N1 -to sdram_ba[0]
	set_location_assignment PIN_Y4 -to sdram_ba[1]
	set_location_assignment PIN_AA3 -to sdram_clk
	set_location_assignment PIN_Y2 -to sdram_data[0]
	set_location_assignment PIN_R1 -to sdram_data[10]
	set_location_assignment PIN_T4 -to sdram_data[11]
	set_location_assignment PIN_U1 -to sdram_data[12]
	set_location_assignment PIN_V1 -to sdram_data[13]
	set_location_assignment PIN_W1 -to sdram_data[14]
	set_location_assignment PIN_Y1 -to sdram_data[15]
	set_location_assignment PIN_W2 -to sdram_data[1]
	set_location_assignment PIN_V2 -to sdram_data[2]
	set_location_assignment PIN_U2 -to sdram_data[3]
	set_location_assignment PIN_T3 -to sdram_data[4]
	set_location_assignment PIN_R2 -to sdram_data[5]
	set_location_assignment PIN_P2 -to sdram_data[6]
	set_location_assignment PIN_M6 -to sdram_data[7]
	set_location_assignment PIN_L6 -to sdram_data[8]
	set_location_assignment PIN_P1 -to sdram_data[9]
	set_location_assignment PIN_M2 -to sdram_nCAS
	set_location_assignment PIN_AA1 -to sdram_nCS
	set_location_assignment PIN_N2 -to sdram_nRAS
	set_location_assignment PIN_P3 -to sdram_nWE

	# Commit assignments
	export_assignments

	# Close project
	if {$need_to_close_project} {
		project_close
	}
}
