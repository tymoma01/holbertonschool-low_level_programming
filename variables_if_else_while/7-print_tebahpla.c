#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main function to print the alphabet
 * Return: Always 0 (Success)
**/
int main(void)
{
char letter;
for (letter = 'z'; letter>='a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
