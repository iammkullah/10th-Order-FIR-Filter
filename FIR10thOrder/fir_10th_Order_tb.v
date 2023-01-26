`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:32:44 01/08/2023
// Design Name:   fir_10th_Order
// Module Name:   E:/CE-7/Digital System Design - DSD/Lab/Xilinx Projects/FIR10thOrder/fir_10th_Order_tb.v
// Project Name:  FIR10thOrder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fir_10th_Order
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fir_10th_Order_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [15:0] x;

	// Outputs
	wire [15:0] y;

	// Instantiate the Unit Under Test (UUT)
	fir_10th_Order uut (
		.clk(clk), 
		.reset(reset), 
		.x(x), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 0;
		x = 10'b0000000000;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 1;
		x = 10'b0000000001;
		
		#100;
		reset = 0;
		x = 10'b0000000010;
		
		#100;
		reset = 0;
		x = 10'b0000000100;
		
		#100;
		reset = 0;
		x = 10'b0000001000;
		
		#100;
		reset = 0;
		x = 10'b0000001000;
		
		#100;
		reset = 0;
		x = 10'b0000010000;
		
		#100;
		reset = 0;
		x = 10'b0000100000;
		
		#100;
		reset = 0;
		x = 10'b0001000000;
		
		#100;
		reset = 0;
		x = 10'b0010000000;
		
		#100;
		reset = 0;
		x = 10'b0100000000;
		
		#100;
		reset = 0;
		x = 10'b1000000000;
        
		// Add stimulus here

	end
	
	// clock generator
    initial 
	 begin
        clk = 0;
        forever 
		  begin
            #100 clk = !clk;
        end
    end
      
endmodule

