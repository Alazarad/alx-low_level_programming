#include "main.h"

/**
 * print_rev - check the code
 *@s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int b;

	for (b = 0; *(s + b) != 0; b++)
		b = b;
	for (b--; b >= 0; b--)
		_putchar(s[b]);
	_putchar('\n');
}
