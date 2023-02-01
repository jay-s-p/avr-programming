/*
Write an AVR C program to send hex values for ASCII characters of 0, 1, 2, 3, 4, 5, A, B, C, and D to Port A.
*/

#include <avr/io.h>

int main(void)
{
	DDRB = 0xFF;
	unsigned char i, arr[] = "012345ABCD";
	for (i = 0; i < 10; i++)
		PORTB = arr[i];
	return 0;
}