#include "main.h"

/**
 * _memset- fills a memory with a constant byte
 * @s: string
 * @b: character to be changed
 * @n: number of times to be filled
 * Return: something
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
