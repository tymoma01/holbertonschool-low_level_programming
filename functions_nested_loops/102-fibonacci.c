#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long int a = 1, b = 2, next;
    int count = 2;

    printf("%ld, %ld", a, b);

    while (count < 50)
    {
        next = a + b;
        printf(", %ld", next);
        a = b;
        b = next;
        count++;
    }

    printf("\n");
    return (0);
}
