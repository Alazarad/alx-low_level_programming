#include <stdio.h>

/**
 * main-entry point
 *
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if ((alphabet != 'e' && alphabet != 'q') && alphabet <= 'z')
			putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
