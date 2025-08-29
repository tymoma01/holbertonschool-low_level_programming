#include "main.h"
#include "2-strlen.c"

void puts2(char *str){
    int i, len = _strlen(str);

    for (i = 0; i < len; i++){
        if (i%2 == 0){
            _putchar(str[i]);
        }
    }
    _putchar('\n');
}
