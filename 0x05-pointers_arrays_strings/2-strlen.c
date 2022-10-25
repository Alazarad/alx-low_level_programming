#include "main.h"

/**
 * _strlen- string length
 * @string: input
 * Return: solution
 */
int _strlen(char *string)
{
	int total = 0;

	while (*(string + total) != '\0')
		total++;

	return (total);
}
