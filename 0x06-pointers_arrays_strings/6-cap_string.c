#include "main.h"
#include <ctype.h>

/**
 * cap_string- capitalize first letter of every word
 * @string: input string
 * Return: capitalized string
 */
char *cap_string(char *string)
{
	int a;

	for (a = 0; string[a] != '\0'; a++)
	{
		if (isspace(string[a]) != 0)
			if (string[a + 1] <= 'z' && string[a + 1] >= 'a')
				string[a + 1] = string[a + 1] - 32;

	}
	return (string);
}

