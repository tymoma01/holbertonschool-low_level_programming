#include "main.h"
#include <stdlib.h>
#include <limits.h>

int *array_range(int min, int max){
    int length, i;
    int *res;
    if (min > max){
        return (NULL);
    }
    length = max - min + 1;

    res = malloc(length * sizeof(int));
    if (res == NULL) {
        return (NULL);
    }
    for (i = 0; i < length; i++) {
        res[i] = min + i;
    }
    return (res);
}
