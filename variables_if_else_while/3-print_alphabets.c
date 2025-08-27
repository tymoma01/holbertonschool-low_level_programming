#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main function to print the alphabet
 * Return: Always 0 (Success)
**/
int main(void)
{
char lettre;
for (lettre = 'a'; lettre<='z'; lettre++)
{
putchar(lettre);
}
for (lettre = 'A'; lettre<='Z'; lettre++)
{
putchar(lettre);
}
putchar('\n');
return (0);
}
