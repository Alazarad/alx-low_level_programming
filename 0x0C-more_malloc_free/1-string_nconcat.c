#include "main.h"

/**
 * string_nconcat- concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to concatenate
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *final;
	unsigned int size1, size2, a, b;

	a = 0;
	b = 0;
	size1 = 0;
	size2 = 0;
	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;

	if (n < size2)
		final = malloc(sizeof(char) * (size1 + n + 1));
	else
		final = malloc(sizeof(char) * (size1 + size2 + 1));
	if (!final)
		return (NULL);
	while (a < size1)
	{
		final[a] = s1[a];
		a++;
	}
	while (n < size2 && a < (size1 + n))
		final[a++] = s2[b++];

	while (n >= size2 && a < (size1 + size2))
		final[a++] = s2[b++];
	final[a] = '\0';
		return (final);
}
