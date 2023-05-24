#include "main.h"

/**
 * get_bit - finds the bit at a specified index
 * @n: bit to find
 * @index: index of bit to get
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}

	return (-1);
}
