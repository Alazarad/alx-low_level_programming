#include <stdio.h>
/**
 * main- print the first 50 fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	unsigned long int e, a, b, c, d, f, g;

	a = 1;
	b = 2;
	printf("%lu", a);

	for (e = 1; e <= 91; ++e)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}

	c = a / 1000000000;
	d = a % 1000000000;
	f = b / 1000000000;
	g = b % 1000000000;

	for (e = 92; e < 99; ++e)
	{
		printf(", %lu", f + (g / 1000000000));
		printf("%lu", g % 1000000000);
		f = f + c;
		c = f - c;
		g = g + d;
		d = g - d;
	}
	printf("\n");
	return (0);
}
