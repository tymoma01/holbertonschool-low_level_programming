#include "main.h"

/**
 * main - prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
int _islower(int letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
