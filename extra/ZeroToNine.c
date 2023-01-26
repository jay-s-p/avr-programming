/*
Print 0 to 9 with delay infinity times on Seven Segment Display(Common cathod).
*/

#include <avr/io.h>
#include <util/delay.h>

void print(int data)
{
    _delay_ms(500);
	PORTC = data;
}

int main(void)
{
	DDRC = 0xFF;
	unsigned char digits[] = {0x3f,0x06,0x5b,0x4f,0x66,0x6D,0x7d,0x07,0x7f,0x6f}, i;
	while (1)
		for (i = 0; i < 10; i++)
			print(digits[i]);
    return 0;
}