#include "main.h"

/**
 * _puts- print a string
 * @string: input
 * Return: void
 */

void _puts(char *string)
{
	int total = 0;

	while (total >= 0)
	{
		if (string[total] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(string[total]);
		total++;
	}
}
