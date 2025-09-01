#include "main.h"

char *rot13(char *str)
{
    int i, j;
    char letters[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
    char rot13[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
    for (i = 0; str[i] != '\0'; i++){
        for (j = 0; letters[j] != '\0'; j++){
            if (str[i] == letters[j]){
                str[i] = rot13[j];
                break;
            }
        }
    }
    return (str);
}
