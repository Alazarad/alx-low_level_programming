#include <stdio.h>

void puts_half(char *str);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
void puts_half(char *str)
{
	int a, b, c, d;

	for (a = 0; str[a] != '\0'; a++)
	{
		b = a;
	}
	if (b % 2 != 0)
		c = (b - 1) /2;
	else 
		c = b/2;

	for (d = c + 1; d <= b; d++)
	{
		putchar(str[d]);
	}
	putchar('\n');
}
