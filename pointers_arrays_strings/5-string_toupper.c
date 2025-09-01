#include "main.h"
#include <stdio.h>

char *string_toupper(char *str){
    int i = 0;
    int delta = 'a'-'A';
    char *s = str;
    while (s[i]!='\0'){
        if (s[i] >= 'a' && s[i]<='z'){
            s[i] -= delta;
        }
        i++;
    }        
    return (s);
}
