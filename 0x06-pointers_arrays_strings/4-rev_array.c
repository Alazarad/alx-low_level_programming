#include "main.h"
/**
 * reverse_array- reverses a given array of numbers
 * @a: pointer to the array to be reversed
 * @n: elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c, b, temp;

	for (c = 0; c < n - 1; c++)
	{
		for (b = c + 1; b > 0; b--)
		{
			temp = a[b];
			a[b] = a[b - 1];
			a[b - 1] = temp;
		}
	}
}
