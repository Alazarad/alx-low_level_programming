#include <stdio.h>

void _puts(char *str);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}

void _puts(char *str)
{
	int a;

	for (a = 0; *(str + a) != 0; a++)
		putchar(str[a]);
	putchar('\n');
}
