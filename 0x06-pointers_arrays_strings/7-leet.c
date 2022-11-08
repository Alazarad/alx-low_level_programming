#include "main.h"
/**
 * leet- encode a string to 1337
 * @string: input string
 * Return: output string
 */
char *leet(char *string)
{
	int a, b;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int substitute[] = {52, 51, 48, 55, 49};

	a = 0;
	while (string[a] != '\0')
	{
		for (b = 0; b < 5; b++)
		{
			if (string[a] == lower[b] || string[a] == upper[b])
			{
				string[a] = substitute[b];
				break;
			}

		}
		a++;
	}
	return (string);
}
