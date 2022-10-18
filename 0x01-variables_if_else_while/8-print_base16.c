#include<stdio.h>
/**
 * main-entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char letter;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
