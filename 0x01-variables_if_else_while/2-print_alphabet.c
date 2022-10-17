#include<stdio.h>
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
		putchar(alphabet);
		alphabet++;
	}
	char upper_case = 'A';

	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');
	return (0);
}
