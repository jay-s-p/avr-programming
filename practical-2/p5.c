/*
Write an AVR C Program to compliment Port C 10000 times. (Note: Only show output of two values)
*/

#include <avr/io.h>

void main(void)
{
    DDRD = 0xFF;
    unsigned int i;
    for (i = 0; i < 10000; i++)
        PORTD = ~PORTD;
    return 0;
}