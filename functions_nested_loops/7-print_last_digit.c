#include "main.h"
#include<stdlib.h>

/**
 * main - prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	_putchar(abs(n%10) + '0');
	return abs(n%10);
}
