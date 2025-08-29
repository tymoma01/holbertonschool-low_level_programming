#include "main.h"
#include "2-strlen.c"

void print_rev(char *s){
    int len;
    for (len = _strlen(s)-1; len >=0; len --){
        _putchar(s[len]);
    }
    _putchar('\n');
}
