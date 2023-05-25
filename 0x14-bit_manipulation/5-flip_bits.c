#include "main.h"

/**
 * flip_bits - find the number of bits to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits necessary to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			bit++;
		n >>= 1;
		m >>= 1;
	}
	return (bit);
}
