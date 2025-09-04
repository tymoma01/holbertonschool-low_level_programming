#include "main.h"
#include <stdlib.h>
#include <limits.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size){
    void *res;
    int i;
    if (new_size == old_size) {
        return (ptr);
    }
    if (ptr == NULL) {
        return malloc(new_size);
    }

    if (new_size == 0 && ptr != NULL) {
        free(ptr);
        return (NULL);
    }
    res = malloc(new_size);
    for (i = 0; i < MIN((int)old_size, (int)new_size); i++) {
        ((char *)res)[i] = ((char *)ptr)[i];
    }
    free(ptr);
    return (res);
    
}
