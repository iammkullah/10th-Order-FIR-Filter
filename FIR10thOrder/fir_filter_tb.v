`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:24:23 01/08/2023
// Design Name:   fir_filter
// Module Name:   E:/CE-7/Digital System Design - DSD/Lab/Xilinx Projects/FIR10thOrder/fir_filter_tb.v
// Project Name:  FIR10thOrder
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

module fir_filter_tb;
    reg clk;
    reg reset;
    reg signed [31:0] x;
    wire signed [31:0] y;

    fir_filter UUT (
        .clk(clk),
        .reset(reset),
        .x(x),
        .y(y)
    );

    // clock generator
    initial begin
        clk = 0;
        forever begin
            #5 clk = !clk;
        end
    end

    // test input stimulus
    initial begin
        reset = 1;
        x = 0;
        #10 reset = 0;
        x = 3;
        #10 x = -5;
        #10 x = 7;
        #10 x = -9;
        #10 x = 11;
        #10 x = -13;
        #10 x = 15;
        #10 x = -17;
        #10 x = 19;
        #10 x = -21;
        #10 x = 23;
    end

endmodule
