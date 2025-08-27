#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main function to print the alphabet
 * Return: Always 0 (Success)
**/
int main(void)
{
char hexaDigit;
char hexaLetter;
for (hexaDigit = 0; hexaDigit<=9; hexaDigit++)
{
putchar(hexaDigit + '0');
}
for (hexaLetter = 'a'; hexaLetter<='f'; hexaLetter++)
{
putchar(hexaLetter);
}
putchar('\n');
return (0);
}
