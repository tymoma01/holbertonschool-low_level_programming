#include "main.h"
#include "2-strlen.c"

void rev_string(char *s){
    int i, len = _strlen(s);
    char temp;
    for (i = 0; i < len / 2; i++){
        temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
}
