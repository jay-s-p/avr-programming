/*
Write an AVR C program to get a byte of data from Port A and send it to Port B.
*/

#include <avr/io.h>

int main(void)
{
	
	DDRA = 0x00;
	DDRC = 0xff;
	PORTA = 0xff;
    while(1)
		PORTC = ~PINA;
	return 0;
}