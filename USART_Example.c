/*
 * USART_Example.c
 *
 * Created: 25-01-2015 13:39:57
 *  Author: Woodje
 */

#include "USART.h"

int main(void)
{
	// Initialize USART.
	USART_Init(MYUBRR);

	while(1)
	{
		// Collect what is received.
		recievedDATA = USART_Receive();
		
		// Send data.
		USART_Transmit(recievedDATA);
	}
}			