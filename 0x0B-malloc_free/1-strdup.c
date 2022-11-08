#include "main.h"

/**
 * _strdup- copy a string in a new memory
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dest;
	unsigned int count, a;

	if (str == 0)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
		count = count + 1;
	count = count + 1;
	dest = (char *) malloc(count * sizeof(char));

	if (dest == 0)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
		dest[a] = str[a];
	return (dest);
}
