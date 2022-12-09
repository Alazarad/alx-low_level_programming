#include <stdio.h>

/**
 * main - find largest prime factor
 *
 * Return: 0
 */
int main()
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i +=2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
