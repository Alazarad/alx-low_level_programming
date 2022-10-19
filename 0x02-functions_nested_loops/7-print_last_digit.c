#include "main.h"
/**
 * print_last_digit-print _putchar
 * @n: input
 * Return: 0
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (4);
}
