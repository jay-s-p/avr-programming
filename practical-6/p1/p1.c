#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0xFF;
	unsigned char i;
	while (1)
		for (i = 0; i < 8; i++)
		{
			PORTC = (1 << i);
			_delay_ms(000);
		}
	return 0;
}