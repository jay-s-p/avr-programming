
#### *1. Write an AVR C Program to give the value from 0 to 9 on PORTB.*

```c
#include <avr/io.h>

int main(void)
{
	DDRB = 0xFF;
	unsigned char i;
	for (i = 0; i <= 9; i++)
		PORTB = i;
	return 0;
}
```
<img src="./p1.png" style="max-width:345px;width:100%" title="output-1" alt="output-1" >
