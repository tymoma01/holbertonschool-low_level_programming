#include "main.h"

unsigned int _strspn(char *s, char *accept){
    unsigned int i, j;
    int match = 0;
    for (i = 0; s[i] != '\0'; i++){
        match = 0;
        for (j = 0; accept[j] != '\0'; j++){
            if (s[i] == accept[j]){
                match = 1;
                break;
            }
        }
        if (match == 0){
            break;
        }
    }
    return (i);
}
