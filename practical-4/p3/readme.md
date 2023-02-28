
#### *3. Write an AVR C Program to compliment the PORTB with delay of 100ms continuously.*

```c
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB = 0xFF;
    while (1)
    {
        PORTB = ~PORTB;
        _delay_ms(100);
    }
    return 0;
}
```
<img src="./p3-1.png" style="max-width:345px;width:100%" title="output-1" alt="output-1" >

<img src="./p3-2.png" style="max-width:345px;width:100%" title="output-2" alt="output-2" >
