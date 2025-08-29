#include "main.h"
#include "2-strlen.c"

void puts_half(char *str){
    int half, len = _strlen(str);

    if (len % 2 != 0){
        half = (len + 1) / 2;
    }
    else{
        half = len / 2;
    }
    while (str[half] != '\0'){
        _putchar(str[half]);
        half++;
    }
    _putchar('\n');
}
