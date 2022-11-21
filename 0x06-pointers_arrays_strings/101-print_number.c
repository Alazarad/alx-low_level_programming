#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}

	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
