#include "main.h"
/**
 * _strcmp- compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: value of difference
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			break;
	}
	b = s1[a] - s2[a];
	return (b);
}
