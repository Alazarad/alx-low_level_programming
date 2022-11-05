#include "main.h"
/**
 * string_toupper- change a string to all upper characters
 * 
 * Return: upper string
 */
char *string_toupper(char *string)
{
	int a;

	for (a = 0; string[a] != '\0'; a++)
	{
		if (string[a] >= 'a' && string[a] <= 'z')
			string[a] = string[a] - 32;
	}
	return (string);
}
