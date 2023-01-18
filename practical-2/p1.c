/*
Write an AVR C Program to give the value from 0 to 9 on PORTB.
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