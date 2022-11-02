#include "main"

/**
 * print_rev - check the code
 *@s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int a, b, c;

	for (b = 0; *(s + b) != 0; b++)
		c = b;
	for (a = b; a >= 0; a--)
		putchar(s[a]);
	putchar('\n');
}
