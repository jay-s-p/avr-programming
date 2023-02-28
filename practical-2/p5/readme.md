
#### *5. Write an AVR C Program to compliment Port C 10000 times. (Note: Only show output of two values)*

```c
#include <avr/io.h>

int main(void)
{
    DDRC = 0xFF;
    unsigned int i;
    for (i = 0; i < 10000; i++)
        PORTC = ~PORTC;
    return 0;
}
```
<img src="./p5-1.png" style="max-width:345px;width:100%" title="output-1" alt="output-1" >

<img src="./p5-2.png" style="max-width:345px;width:100%" title="output-2" alt="output-2" >
