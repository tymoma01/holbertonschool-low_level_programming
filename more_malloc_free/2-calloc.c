#include "main.h"
#include <stdlib.h>
#include <limits.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *res;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);

    if (nmemb > UINT_MAX / size)
        return (NULL);

    res = malloc(nmemb * size);
    if (res == NULL)
        return (NULL);

    for (i = 0; i < nmemb * size; i++)
        ((unsigned char *)res)[i] = 0;

    return res;
}
