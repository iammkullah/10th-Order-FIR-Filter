`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:44:46 01/08/2023 
// Design Name:    
// Module Name:    fir_filter 
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
//////////////////////////////////////////////////////////////////////////////////
module fir_filter (input clk, input reset, input [15:0] x, output reg[15:0] y);

reg [15:0] delay_line [9:0];
reg [15:0] tap_weights [9:0];

integer i;

// Initialize tap weights
initial begin
  tap_weights[0] = 1;
  tap_weights[1] = 1;
  tap_weights[2] = 1;
  tap_weights[3] = 1;
  tap_weights[4] = 1;
  tap_weights[5] = 1;
  tap_weights[6] = 1;
  tap_weights[7] = 1;
  tap_weights[8] = 1;
  tap_weights[9] = 1;
end

// Update delay line and output y on each clock edge
always @ (posedge clk or posedge reset) 
begin
  if (reset) 
  begin
    for (i=0; i<10; i=i+1) 
	 begin
      delay_line[i] <= 0;
    end
    y <= 0;
  end 
  else 
  begin
    for (i=9; i>0; i=i-1) 
	 begin
      delay_line[i] <= delay_line[i-1];
	 end
  
    delay_line[0] <= x;
    y <= 0;
	 
    for (i=0; i<10; i=i+1) 
	 begin
      y <= y + tap_weights[i] * delay_line[i];
    end
  end
end

endmodule
