`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:23:00 01/08/2023 
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

module fir_filter (clk, reset, x, y);
    input clk, reset;
    input signed [31:0] x;
    output signed [31:0] y;

    reg signed [31:0] x_reg [9:0];
    reg signed [31:0] y_reg;
    reg signed [31:0] coeff [9:0];
    integer i;

    // initialize coefficients
    initial begin
        coeff[0] = -3;
        coeff[1] = 4;
        coeff[2] = 6;
        coeff[3] = -2;
        coeff[4] = -5;
        coeff[5] = 3;
        coeff[6] = 7;
        coeff[7] = 2;
        coeff[8] = -1;
        coeff[9] = 4;
    end

    // shift x values and calculate y
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            y_reg <= 0;
            for (i = 0; i < 10; i = i + 1) begin
                x_reg[i] <= 0;
            end
        end else begin
            y_reg <= 0;
            for (i = 9; i > 0; i = i - 1) begin
                x_reg[i] <= x_reg[i - 1];
            end
            x_reg[0] <= x;
            for (i = 0; i < 10; i = i + 1) begin
                y_reg <= y_reg + x_reg[i] * coeff[i];
            end
        end
    end

    // assign output
    assign y = y_reg;

endmodule

