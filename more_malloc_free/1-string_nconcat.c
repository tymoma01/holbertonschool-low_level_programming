#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n){
    char *res;
    unsigned int l1 = 0, l2 = 0, i = 0;
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }
    while (s1[l1] != '\0') {
        l1++;
    }
    while (s2[l2] != '\0') {
        l2++;
    }
    if (n > l2) {
        n = l2;
    }

    res = malloc((l1 + l2 + 1) * sizeof(char));
    if (res == NULL) {
        return (NULL);
    }
    for (i = 0; i < l1; i++) {
        res[i] = s1[i];
    }
    for (i = 0; i < n; i++) {
        res[l1 + i] = s2[i];
    }
    res[l1 + n] = '\0';
    return (res);
}
