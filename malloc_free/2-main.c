#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s, *a, *b, *c;

    s = str_concat("Best ", "School");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    a = str_concat("Hello", NULL); 
    printf("%s\n", a);
    b = str_concat(NULL, "Hello"); 
    printf("%s\n", b);
    c = str_concat(NULL, NULL);
    printf("%s\n", c);
    free(s);
    return (0);
}
