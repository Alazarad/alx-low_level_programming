#include "main.h"

/**
 * get_endianness - check for endianness
 * return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b;

	b = (char *) &a;

	return ((int)*b);
}
