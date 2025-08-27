#include "main.h"

/**
 * main - prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int letter)
{
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
