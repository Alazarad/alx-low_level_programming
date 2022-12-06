#include "main.h"

/**
 * _strchr- locate first occurrence of a character in a string
 * @s: string to be searched
 * @c: character to be found
 * Return: pointer to first c found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (0);
}
