#include "main.h"

/* helper: print any int using only _putchar */
static void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = (unsigned int)(- (unsigned int)n);
	}
	else
	{
		m = (unsigned int)n;
	}

	if (m / 10)
		print_number((int)(m / 10));

	_putchar((char)((m % 10) + '0'));
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			print_number(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			print_number(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
