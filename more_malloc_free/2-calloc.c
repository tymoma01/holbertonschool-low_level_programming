#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size){
    void *res;
    if (nmemb == 0 || size == 0){
        return (NULL);
    }
    res = malloc((nmemb + 1)*size);
    if (res == NULL) {
        return (NULL);
    }
    return res;
}
