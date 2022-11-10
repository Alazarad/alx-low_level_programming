#include "main.h"

/**
 * malloc_checked- allocate memory using malloc
 * @b:number of  bytes
 * Return: pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
