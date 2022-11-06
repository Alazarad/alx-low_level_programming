#include "main.h"
/**
 * rev_string- reverse a string
 * @s: input
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0, i, j;
	char *string, new;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	string = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			new = *(string + j);
			*(string + j) = *(string + (j - 1));
			*(string + (j - 1)) = new;
		}
	}
}
