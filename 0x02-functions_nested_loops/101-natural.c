#include <stdio.h>
/**
 * main- add multiples of 3 and 5 till 1024
 *
 * Return: void
 */
int main(void)
{
	int a, b = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			b = a + b;
	}
	printf("%d\n", b);
	return (0);
}
