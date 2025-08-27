#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main function to print the alphabet
 * Return: Always 0 (Success)
**/
int main(void)
{
int a;
for (a = 0; a<=9; a++)
{
    putchar(a + '0');
    if (a < 9) {
        putchar(' ');
        putchar(',');
    }
}
putchar('\n');
return (0);
}
