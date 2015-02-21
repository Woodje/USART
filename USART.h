/*
 * USART.h
 *
 * Created: 25-01-2015 12:19:36
 *  Author: Woodje
 */

#ifndef USART_H_
#define USART_H_

#ifndef BAUD
#define BAUD 2400
#endif /* BAUD */

#define MYUBRR (int)(F_CPU/16/BAUD-1)

unsigned char USART_Receive(void);

unsigned char recievedDATA;

// Initialize USART.
void USART_Init(unsigned int ubrr);

// Transmit data.
void USART_Transmit(unsigned char data);

// Receive data.
unsigned char USART_Receive(void);

#endif /* USART_H_ */