#include "main.h"

char *_strncat(char *dest, char *src, int n){
    int i = 0;
    int len_dest = 0;
    if (n <= 0){
        return dest;
    }
    while (dest[len_dest] != '\0'){
        len_dest++;
    }
    while (src[i] != '\0' && i < n){
        dest[len_dest + i] = src[i];
        i++;
    }
    return dest;
}
