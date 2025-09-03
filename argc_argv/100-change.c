#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int cents[] = {25, 10, 5, 2, 1};
    int i = 0, res = 0;
    int remain = atoi(argv[1]);
    if (argc != 2){
        printf("Error\n");
        return (1);
    }
    if (atoi(argv[1]) < 0){
        printf("0\n");
        return (0);
    }

    while (remain > 0){
        
        if (cents[i] <= remain){
            remain -= cents[i];
            res++;
            i = 0;
        }
        else {
            i++;
        }
    }
    printf("%d\n", res);
    return (0);
}
