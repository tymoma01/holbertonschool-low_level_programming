#include "main.h"

char *_strcat(char *dest, char *src){
    int i=0, len_dest = 0;

    while (dest[len_dest] != '\0'){
        len_dest++;
    }

    while (src[i] != '\0'){
        dest[len_dest + i] = src[i];
        i++;
    }
    dest[len_dest + i] = '\0';
    return (dest);
}
