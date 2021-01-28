`timescale 10ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:55:39 01/27/2021
// Design Name:   rx
// Module Name:   E:/Working/Projects/UART-Module/rx_test.v
// Project Name:  UART-Module
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: rx
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rx_test;

	// Inputs
	reg clock;
	reg rx_in;
	

	// Outputs
	wire error;
	wire [7:0] Rx;

	// Instantiate the Unit Under Test (UUT)
	rx uut (
		.clock(clock), 
		.rx_in(rx_in), 
		.error(error), 
		.Rx(Rx)
	);

	initial begin
		// Initialize Inputs
		clock = 1;
		rx_in = 1;


		// Wait 100 ns for global reset to finish
		#100;
      
		// Add stimulus here
		#434 rx_in = 1'b0;		//10101010
		#434 rx_in = 1'b0;
		#434 rx_in = 1'b1;
		#434 rx_in = 1'b0;
		#434 rx_in = 1'b1;
		#434 rx_in = 1'b0;
		#434 rx_in = 1'b1;
		#434 rx_in = 1'b0;
		#434 rx_in = 1'b1;
		#434 rx_in = 1'b0;
		#434 rx_in = 1'b1;
		

		
		
	end
     always #1 clock = ~clock; 
endmodule

