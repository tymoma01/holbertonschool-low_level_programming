#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n){
    unsigned int i;
    char *res = dest;
    for (i = 0; i < n; i++){
        dest[i] = src[i];
    }
    return (res);
}
