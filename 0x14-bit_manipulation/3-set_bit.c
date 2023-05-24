#include "main.h"

/**
 * set_bit - set value of bit to 1
 * @n: pointer to bit to set
 * @index: index of bit
 * Return: 1 if successful and -1 if not
 */
int set_bit(unsigned long int  *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	*n = (*n | a);

	return (1);
}
