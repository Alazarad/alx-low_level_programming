#include "main.h"

/**
 * create_array- print a string
 * @size: number of elements in an array
 * @c: character
 * Return: the pointer
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int place;

	if (size == 0)
		return (NULL);
	a = (char *) malloc(size * sizeof(c));

	if (a == 0)
	{
		return (NULL);
	}

	else
	{
		place = 0;
		while (place < size)
		{
			*(a + place) = c;
			place++;
		}
		return (a);
	}
}
