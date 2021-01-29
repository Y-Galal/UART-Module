`timescale 10ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Youssef Ahmed
//
// Create Date:   17:43:40 01/29/2021
// Design Name:   Uart
// Module Name:  uart_tb.v
// Project Name:  UART-Module
// Target Device:  
// Tool versions:  
// Description: UART test bench file
//
// Verilog Test Fixture created by ISE for module: Uart
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module uart_tb;

	// Inputs
	reg clock;
	reg Rx;
	reg Tx_Start;
	reg [7:0] Tx_data;

	// Outputs
	wire [7:0] Rx_data;
	wire Tx;
	wire error;
	wire Tx_Busy;

	// Instantiate the Unit Under Test (UUT)
	Uart uut (
		.clock(clock), 
		.Rx(Rx), 
		.Tx_Start(Tx_Start), 
		.Tx_data(Tx_data), 
		.Rx_data(Rx_data), 
		.Tx(Tx), 
		.error(error), 
		.Tx_Busy(Tx_Busy)
	);
	
	task testing_tx_rx;
			input reg [7:0]data_to_transmit;	//to hold the data passed to this task
			begin
				
				Tx_data<= data_to_transmit;	//putting the data to Transmit register
				Tx_Start <= 1;						//triggering the Tx_Start pulse to start transmitting
				#1 Tx_Start<=0;					
				
				
			end
	endtask
	
	initial begin
		// Initialize Inputs
		clock = 0;
		Tx_Start = 0;
		Tx_data = 0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		testing_tx_rx(8'b10101010);		//testing UART driver by connecting the tx and rx together 
										// then transmitting b 1010 1010 to the receiver.
		
	end
		always @(posedge clock) Rx<=Tx;
      always #1 clock = ~clock;
endmodule

