#include <stdio.h>
/**
 * main- print the first 50 fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	long int a, b, c, d, e;

	a = 1;
	b = 2;
	e = 0;

	for (c = 1; a <= 4000000; ++c)
	{
		if (a % 2 == 0)
			e = e + a;
		d = a + b;
		a = b;
		b = d;
	}
	printf("%ld\n", e);
	return (0);
}
