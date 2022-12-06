#include "main.h"
/**
 * _strncat- concatenate two string with n as final byte
 * @dest: destination string
 * @src: soutce string
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, b;

	for (count = 0; dest[count] != '\0'; count++)
		count = count;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[count + b] = src[b];
	}
	return (dest);
}
