#include "main.h"
/**
 * puts_half- print last half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int a, b, c, d;

	for (a = 0; str[a] != '\0'; a++)
	{
		b = a;
	}
	if (b % 2 != 0)
		c = (b - 1) / 2;
	else
		c = b / 2;

	for (d = c + 1; d <= b; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
