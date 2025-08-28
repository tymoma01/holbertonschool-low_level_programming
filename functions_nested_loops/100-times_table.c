#include "main.h"

void print_number(int n){
	if (n == 0){
		_putchar(n + '0');
	}
	else if (n < 10) {
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n < 100) {
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((n/10) + '0');
		_putchar((n%10) + '0');
	}
	else {
		_putchar(',');
		_putchar(' ');
		_putchar((n/100) + '0');
		_putchar((n/10%10) + '0');
		_putchar((n%10) + '0');
	}
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i;
		int j;
		for (i = 0; i <= n; i++){
			for (j = 0; j <= n; j++){
				if (i == 0 && j > 0){
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				print_number(i*j);
			}
			_putchar('\n');
		}
	}
}
