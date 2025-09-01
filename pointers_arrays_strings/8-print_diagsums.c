#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size){
    int i;
    int diag1 = 0, diag2 = 0;

    for (i = 0; i < size; i++){
        
        diag1 += a[i * size + i];
        diag2 += a[(size - 1 - i) + i * size];
        
    }
    printf("%d, %d\n", diag1, diag2);
}
