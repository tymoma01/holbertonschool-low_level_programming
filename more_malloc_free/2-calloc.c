#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size){
    int *res;
    unsigned int i;
    if (nmemb == 0 || size == 0){
        return (NULL);
    }
    res = malloc((nmemb + 1)*size);
    if (res == NULL) {
        return (NULL);
    }

    for (i = 0; i < nmemb; i++) {
        res[i] = 0;
    }
    res[nmemb] = '\0';
    return res;
}
