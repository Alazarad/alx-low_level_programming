#include "main.h"

/**
 * _strcat- concatenate two strings
 * @dest: destination string
 * @src: soutce string
 * Return: pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	char temp[50];
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		temp[b] = dest[a];
		a++;
		b++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		temp[b] = src[a];
		a++;
		b++;
	}
	a = 0;
	while (temp[a] != '\0')
		a++;
	for (b = 0; b <= a; b++)
	{
		dest[b] = temp[b];
	}
	return (dest);
}
