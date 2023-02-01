/*
Draw the diagram of the seven segment interfacing with the ATmega32 and
write program to display 9 on the seven segment display.
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
    PORTC = 0x6F;

    return 0;
}