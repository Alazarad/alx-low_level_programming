#include <stdio.h>
/**
 * main-entry point
 *
 *Return: always 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a != b && a < b)
			{
			putchar(a + '0');
			putchar(b + '0');
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
