#include "main.h"
/**
 * _strspn- calculate length of accept in initial segment of s
 * @s: string to be scaned
 * @accept: characters to search for
 * Return: number of bytes of match
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	b = 0;
	c = 0;
	while ((s[c] >= 'a' && s[c] <= 'z') || (s[c] >= 'A' && s[c] <= 'Z'))
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
				b++;
		}
		c++;
	}
	return (b);
}
