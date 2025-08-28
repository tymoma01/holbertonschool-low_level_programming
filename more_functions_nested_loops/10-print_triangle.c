#include "main.h"
#include <ctype.h>

void print_triangle(int size)
{
    int i, j, k;
    if (size > 0){
        for (i = 0; i < size; i++){
            for (j = size-i - 1; j > 0 ; j--){
                _putchar(' ');
            }
            for (k = 0; k <= i; k++){
                _putchar('#');
            }
            _putchar('\n');
        }
    }
    _putchar('\n');
}
