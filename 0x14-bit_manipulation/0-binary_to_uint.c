#include "main.h"

/**
 * binary_to_uint - converts binary number ot unsigned int
 * @b: pointer to a string of 1 and 0
 * Return: converted number or 0 if there are chars other than 0 and 1 or
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}
