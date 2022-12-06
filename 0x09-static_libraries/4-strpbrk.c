#include "main.h"

/**
 * _strpbrk- find first occurrence of any part of
 * string s in string accept
 * @s: string to match character from
 * @accept: string to be searched for matching characters
 * Return: pointer to first occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int count1, count2;

	for (count1 = 0; *(s + count1) != '\0'; count1++)
	{
		for (count2 = 0; *(accept + count2) != '\0'; count2++)
		{
			if (s[count1] == accept[count2])
				return (s + count1);
		}
	}
	return (0);
}
