#include "main.h"
#include<stdlib.h>

/**
 * main - prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++){
		for (j = 0; j < 60; j++){
			_putchar((i/10) + '0');
			_putchar((i%10) + '0');
			_putchar(':');
			_putchar((j/10) + '0');
			_putchar((j%10) + '0');
			_putchar('\n');
		}
	}
}
