`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:26:18 01/08/2023 
// Design Name: 
// Module Name:    fir_10th_Order 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
////////////////////////////////////////////////////////////////////////////////
module fir_10th_Order(
  input wire clk,
  input wire reset,
  input wire [15:0] x,
  output reg [15:0] y
);

// Coefficients for 10th order FIR filter
reg [15:0] c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;

// Delay line
reg [15:0] d0, d1, d2, d3, d4, d5, d6, d7, d8, d9;

always @(*)
begin
c0 = 1;
c1 = 1;
c2 = 1;
c3 = 1;
c4 = 1;
c5 = 1;
c6 = 1;
c7 = 1;
c8 = 1;
c9 = 1;
end

// Update delay line
always @(posedge clk) 
begin
  if (reset) 
  begin
    d0 <= 0;
    d1 <= 0;
    d2 <= 0;
    d3 <= 0;
    d4 <= 0;
    d5 <= 0;
    d6 <= 0;
    d7 <= 0;
    d8 <= 0;
    d9 <= 0;
  end 
  else 
  begin
    d0 <= x;
    d1 <= d0;
    d2 <= d1;
    d3 <= d2;
    d4 <= d3;
    d5 <= d4;
    d6 <= d5;
    d7 <= d6;
    d8 <= d7;
    d9 <= d8;
  end
end

// Compute output
always @(*) 
begin
  y = c0*d0 + c1*d1 + c2*d2 + c3*d3 + c4*d4 + c5*d5 + c6*d6 + c7*d7 + c8*d8 + c9*d9;
end

endmodule
