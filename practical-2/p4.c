/*
Write an AVR C Program to compliment Port C 200 times. (Note: Only show output of two values)
*/

#include <avr/io.h>

void main(void)
{
    DDRB = 0xFF;
    unsigned char i;
    for (i = 0; i < 200; i++)
        PORTB = ~PORTB;
    return 0;
}