#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main function to print the alphabet
 * Return: Always 0 (Success)
**/
int main(void)
{
int digit;
for (digit = 0; digit<10; digit++)
{
putchar(digit + '0');
}
putchar('\n');
return (0);
}
