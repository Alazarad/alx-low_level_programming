#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int a, b, c;
	double d = 1;

	c = n;
	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			c = n * -1;
			_putchar('-');
		}

		while (d <= c)
			d *= 10;
		a = d / 10;

		while (a >= 1)
		{
			b = c / a;
			_putchar(b + '0');
			c = (c - (a * b));
			a /= 10;
		}
	}
}
