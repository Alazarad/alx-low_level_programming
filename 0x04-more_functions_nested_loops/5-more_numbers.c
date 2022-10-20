#include "main.h"

/**
 * more_numbers- print 1-14 10 times
 *
 * return: 0
 */
void more_numbers(void)
{
	int c;
	int n = 0;
	while (n <= 9)
	{
	for (c = 0; c <= 14; c++)
	{
		if (c > 9)
			_putchar((c / 10) + '0');

		_putchar((c % 10) + '0');
	}
	_putchar('\n');
	n++;
	}
}

