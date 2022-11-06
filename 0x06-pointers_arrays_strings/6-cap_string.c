#include "main.h"
#include <ctype.h>

/**
 * cap_string- capitalize first letter of every word
 * @string: input string
 * Return: capitalized string
 */
char *cap_string(char *string)
{
	int a, b;
	int characters[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 123, 125};

	if (string[0] >= 'a' && string[0] <= 'z')
		string[0] = string[0] - 32;
	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; b < 13; b++)
		{
			if (string[a] == characters[b])
			{
			if (string[a + 1] <= 'z' && string[a + 1] >= 'a')
			{
				string[a + 1] = string[a + 1] - 32;
				break;
			}
			}
		}

	}
	return (string);
}

