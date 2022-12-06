#include "main.h"
/**
 * _strncpy- copy a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[count] = src[count];
	}
	for ( ; count < n; count++)
		dest[count] = '\0';
	return (dest);
}
