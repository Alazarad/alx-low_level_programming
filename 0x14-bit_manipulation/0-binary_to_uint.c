#include "main.h"

/**
 * binary_to_uint - convert a binary to unsigned int
 * @b: binary number to be converted
 * Return: uthe unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int length, i;

	if (!b)
		return (0);
	a = 0;
	for (length = 0; b[length] != '\0'; length++)
		;
	for (length--, i = 1; length >= 0; length--, i *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		if (b[length] & 1)
			a += i;
	}
	return (a);
}
