#include "main.h"
/**
 * print_line-print a straight line
 *@n: input
 * return: 0
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
		_putchar(47 + '0');
	_putchar('\n');
}
