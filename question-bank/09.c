/*
Write an AVR C Program to send the ASCII value of word “ATMIYA” on Port C.
*/

#include <avr/io.h>

int main(void)
{
	DDRB = 0xFF;
	unsigned char i, arr[] = "ATMIYA";
	for (i = 0; i < 6; i++)
		PORTB = arr[i];
	return 0;
}