#include "main.h"

/**
 * str_concat- concatenates two strings with new memory
 * @s1: first string
 * @s2: second string
 * Return: pointer to new location
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int a, b, count1, count2, count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (count1 = 0; s1[count1] != '\0'; count1++)
		count1 = count1;
	for (count2 = 0; s2[count2] != '\0'; count2++)
		count2 = count2;
	count = count1 + count2 + 1;

	dest = (char *) malloc(count * sizeof(char));
	if (dest == 0)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
		dest[a] = s1[a];
	for (b = 0; s2[b] != '\0'; b++)
	{
		dest[a] = s2[b];
		a++;
	}
	return (dest);
}
