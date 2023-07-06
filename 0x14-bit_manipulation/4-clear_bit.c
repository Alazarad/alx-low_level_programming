#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to bit to be set to 0
 * @index: index
 * Return: 1 if it worked, -1 if it didn't.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
