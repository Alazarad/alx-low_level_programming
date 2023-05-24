#include "main.h"

/**
 * clear_bit - sets the value of a bit at a specified index to 0
 * @n: pointer of bit
 * @index: index of the bit
 * Return: 1 if it is successful, -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
	{
		return (-1);
	}

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
