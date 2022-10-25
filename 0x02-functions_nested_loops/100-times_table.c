#include "main.h"
/**
 * print_times_table -print the times table
 *@n: value of timestable
 * Return:0
 */
void print_times_table(int n)
{
	int a, b, c;


	if (n <= 15 && n >= 0)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c < 10)
			{
				_putchar(c + '0');
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (c < 100 && c >= 10)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (c >= 100)
			{
				_putchar(c / 100 + '0');
				_putchar((c / 10) % 10 + '0');
				_putchar(c % 10 + '0');
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	}
}
