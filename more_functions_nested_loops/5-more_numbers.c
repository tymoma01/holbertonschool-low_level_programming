#include "main.h"
#include <ctype.h>

void more_numbers(void)
{
    int i;
    int j;
    for (j = 0; j < 10; j++){
        for (i = 0; i <= 14; i++){
            if (i >= 10){
                _putchar(i/10 + '0');
                _putchar(i%10 + '0');
            }
            else{
                _putchar(i + '0');
            }
        }
        _putchar('\n');
    }
}
