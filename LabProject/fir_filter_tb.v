`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:46:12 01/08/2023
// Design Name:   fir_filter
// Module Name:   E:/CE-7/Digital System Design - DSD/Lab/Xilinx Projects/LabProject/fir_filter_tb.v
// Project Name:  LabProject
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fir_filter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module fir_filter_tb();

reg clk, reset;
reg [15:0] x;
wire [15:0] y;

fir_filter dut (clk, reset, x, y);

initial begin
clk = 0;
forever #10 clk = ~clk;
end

initial begin
reset = 1;
x = 0;
#10 reset = 0;
#10 x = 1;
#10 x = 2;
#10 x = 3;
#10 x = 4;
#10 x = 5;
#10 x = 6;
#10 x = 7;
#10 x = 8;
#10 x = 9;
#10 x = 10;
#10 x = 11;
#10 x = 12;
#10 x = 13;
#10 x = 14;
#10 x = 15;
#10 x = 16;
#10 x = 17; 
#10 x = 18;
#10 x = 19;
#10 x = 20;
end

endmodule
