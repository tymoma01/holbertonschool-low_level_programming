#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b){
    
    void *res = malloc(b);
    if (res == NULL){
        exit(98);
    }
    return (res);
}
