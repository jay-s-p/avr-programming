/*
Write an AVR C program to send hex values for ASCII characters of 0, 1, 2, 3, 4, 5, A, B, C, and D to Port A.
*/

#include <avr/io.h>

int main(void)
{
	DDRC = 0xff;
	unsigned char i;
	for (i = 0; i <= 170; i++)
		PORTC = i;
	return 0;
}