#include "main.h"

/**
 * _strcat- concatenate two strings
 * @dest: destination string
 * @src: soutce string
 * Return: pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
