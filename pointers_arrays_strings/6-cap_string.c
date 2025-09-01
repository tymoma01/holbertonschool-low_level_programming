#include "main.h"
#include <stdio.h>

int isin(char s, char *separator){
    int res = 0, i = 0;
    while (separator[i] != '\0'){
        if (s == separator[i]){
            res = 1;
            break;
        }
        i++;
    }
    return (res);
}

char *cap_string(char *str){
    int i = 0;
    int delta = 'a' - 'A';
    int toSwitch = 0;
    char separators[] = {',', ';', '.', '!', '?', '"', ' ', '\n', '(', ')', '\t', '{', '}'};
    while (str[i] != '\0'){
        if (i == 0){
            toSwitch = 1;
        }
        else if (isin(str[i-1], separators) == 1){
            toSwitch = 1;
        }
        if (toSwitch == 1){
            if (str[i] >= 'a' && str[i] <= 'z'){
                str[i] -= delta;
                toSwitch = 0;
            }
            else if ((str[i] >= 'A' && str[i] <= 'Z' )|| (str[i] >= '0' && str[i] <= '9')){
                toSwitch = 0;
            }
        }
        i++;
    }
    return (str);
}
