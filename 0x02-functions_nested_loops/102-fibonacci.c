#include <stdio.h>
/**
 * main- print the first 50 fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	long int a, b, c, d;

	a = 1;
	b = 2;

	for (c = 1; c <= 50; ++c)
	{
		if (c != 50)
			printf("%ld, ", a);
		else
			printf("%ld", a);
		d = a + b;
		a = b;
		b = d;
	}
	printf("\n");
	return (0);
}
