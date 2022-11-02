#include "main.h"

/**
 * print_rev - check the code
 *@s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int a, b;

	for (b = 0; *(s + b) != 0; b++)
		b = b;
	for (a = b; a > 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
