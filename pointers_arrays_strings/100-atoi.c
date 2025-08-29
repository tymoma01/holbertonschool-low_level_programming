#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: the integer value, or 0 if no digits
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int started = 0;
    int result = 0;

    while (s[i] != '\0')
    {
        if (!started)
        {
            if (s[i] == '-')
                sign = -sign;
            else if (s[i] == '+')
                ;
            else if (s[i] >= '0' && s[i] <= '9')
            {
                started = 1;
                result = result * 10 - (s[i] - '0');
            }
        }
        else
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                result = result * 10 - (s[i] - '0');
            }
            else
            {
                break;
            }
        }
        i++;
    }

    if (!started)
        return 0;

    return (sign < 0) ? result : -result;
}
