#include "main.h"

/**
 * _calloc- allocate memory for an array
 * @nmemb: number of members of the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
		p[a] = 0;
	return (p);
}
