/*
Draw the diagram of the seven segment interfacing with the ATmega32 and
write program to display 9 on the seven segment display.
*/

#include <avr/io.h>

int main(void)
{
    DDRC = 0xFF;
    while (1)
        PORTC = 0x6F;

    return 0;
}