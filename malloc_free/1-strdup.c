#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str){
    char *res;
    int i, len = 0;
    if (!str){
        return (NULL);
    }
    while (str[len] != '\0'){
        len++;
    }

    res = malloc(len * sizeof(char));
    
    for (i = 0; i < len; i++){
        res[i] = str[i];
    }
    return (res);
}
