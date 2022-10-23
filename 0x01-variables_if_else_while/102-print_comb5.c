#include <stdio.h>
/**
 * main-entry point
 *
 *Return: always 0
 */

int main(void)
{
	int a, b, c, d, num1, num2;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					num1 = (a * 10) + b;
					num2 = (c * 10) + d;
					if (num1 < num2)
					{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
						if (a == 9 && b == 8 && c == 9 && d == 9)
							break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
