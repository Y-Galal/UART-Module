`timescale 10ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Youssef Ahmed
// 
// Create Date:    15:09:19 01/29/2021 
// Design Name: 
// Module Name:    Uart 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: UART port mapping
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Uart(input clock, 
				input Rx, 
				input Tx_Start, 
				input [7:0] Tx_data, 
				output wire [7:0] Rx_data, 
				output wire Tx,
				output wire error ,
				output wire Tx_Busy);
	
	
	rx Receiver(	.clock(clock), .rx_in(Rx), .error(error), .Rx(Rx_data));
	tx Transmitter( .Data_to_send(Tx_data), .Tx_Start(Tx_Start),	.clock(clock),	.Tx(Tx), .Tx_Busy(Tx_Busy));


endmodule
