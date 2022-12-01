#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- print diagonal of an array till specified
 * @a: array
 * @size: number of diagonals to add up
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b;
	int sum = 0, d = 0;

	for (b = 0; b < size; b++)
	{
		d = b * (size + 1);
		sum = sum + a[d];
	}
	printf("%d\n", sum);
}
