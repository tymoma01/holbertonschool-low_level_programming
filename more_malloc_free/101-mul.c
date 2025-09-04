#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* check if string contains only digits */
int is_digit(char *s)
{
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return 0;
        s++;
    }
    return 1;
}

/* get length of string */
int _strlen(char *s)
{
    int len = 0;
    while (s[len])
        len++;
    return len;
}

/* print error and exit */
void error(void)
{
    printf("Error\n");
    exit(98);
}

/**
 * main - multiply two positive numbers
 */
int main(int argc, char *argv[])
{
    char *num1, *num2;
    int len1, len2, lenres, i, j, carry, n1, n2, sum;
    int *res;

    if (argc != 3)
        error();

    num1 = argv[1];
    num2 = argv[2];

    if (!is_digit(num1) || !is_digit(num2))
        error();

    len1 = _strlen(num1);
    len2 = _strlen(num2);
    lenres = len1 + len2;

    res = malloc(sizeof(int) * lenres);
    if (res == NULL)
        return 1;

    for (i = 0; i < lenres; i++)
        res[i] = 0;

    /* multiplication */
    for (i = len1 - 1; i >= 0; i--)
    {
        n1 = num1[i] - '0';
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            sum = n1 * n2 + res[i + j + 1] + carry;
            res[i + j + 1] = sum % 10;
            carry = sum / 10;
        }
        res[i + j + 1] += carry;
    }

    /* skip leading zeros */
    i = 0;
    while (i < lenres && res[i] == 0)
        i++;

    if (i == lenres)
        _putchar('0');
    else
    {
        for (; i < lenres; i++)
            _putchar(res[i] + '0');
    }
    _putchar('\n');

    free(res);
    return 0;
}
