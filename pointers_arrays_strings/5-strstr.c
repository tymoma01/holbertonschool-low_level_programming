#include "main.h"
#include <stdio.h>

char *_strstr(char *haystack, char *needle){
    int i, j;

    for (i = 0; haystack[i] != '\0'; i++){
        j = 1;
        if (haystack[i] == needle[0]){
            while (needle[j] == haystack[i+j] && needle[j] != '\0'){
                j++;
            }
            if (needle[j] == '\0'){
                return (&haystack[i]);
            }
        }
    }
    return (0);
}
