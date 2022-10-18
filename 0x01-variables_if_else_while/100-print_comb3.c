#include <stdio.h>
/**
*main - Prints all combinations of two two digits with,
* and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar((n1 / 10) + '0');
			putchar((n2 % 10) + '0');
			putchar(32);
			putchar((n1 / 10) + '0');
			putchar((n2 % 10) + '0');
			if (n1 / 10 != 9 || n1 % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
