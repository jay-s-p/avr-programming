/*
Write an AVR C Program to take the value from Port B if the value is less than 100 give it to Port C otherwise to port D.
*/

#include <avr/io.h>

int main(void)
{
	DDRB = 0x00;
	DDRC = 0xFF;
	DDRD = 0xFF;
	unsigned char temp;

	while (1)
	{
		temp = PINB;
		if (temp < 100)
			PORTC = temp;
		else
			PORTD = temp;
	}

	return 0;
}