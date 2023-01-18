/*
Write an AVR C Program to get a value from Port A. If the value is positive send it to Port B otherwise send it to Port D.
*/

#include <avr/io.h>

int main(void)
{
    DDRA = 0x00;
    DDRB = 0xFF;
    DDRD = 0xFF;
    unsigned char data;
    while (1)
    {
        data = PINA;
        if (data < 128)
            PORTB = data;
        else
            PORTD = data;
    }
    return 0;
}