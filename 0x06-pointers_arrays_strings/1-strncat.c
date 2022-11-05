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
	char temp[100];
	int a, b, c;

	for (a = 0; dest[a] != '\0'; a++)
	{
		temp[a] = dest[a];
	}
	for (b = 0; src[b] != '\0'; b++)
		b = b;
	for (c = 0; src[c] != '\0' && c < n; c++)
	{
		temp[a] = src[c];
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		dest[b] = temp[b];
	}
	return (dest);
}
