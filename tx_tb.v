`timescale 10ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:57:16 01/28/2021
// Design Name:   tx
// Module Name:   E:/Working/Projects/UART-Module/tx_tb.v
// Project Name:  UART-Module
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: tx
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tx_tb;

	// Inputs
	reg [7:0] Data_to_send;
	reg Tx_Start;
	reg clock;

	// Outputs
	wire Tx;
	wire Tx_Busy;

	// Instantiate the Unit Under Test (UUT)
	tx uut (
		.Data_to_send(Data_to_send), 
		.Tx_Start(Tx_Start), 
		.clock(clock), 
		.Tx(Tx), 
		.Tx_Busy(Tx_Busy)
	);

	initial begin
		// Initialize Inputs
		Data_to_send = 0;
		Tx_Start = 0;
		clock = 1;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
		
		Data_to_send = 8'b10101010;
		Tx_Start = 1;
		#1 Tx_Start=0;

		
	end
      always #1 clock = ~clock;
endmodule

