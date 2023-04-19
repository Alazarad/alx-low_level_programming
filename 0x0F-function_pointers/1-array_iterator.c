#include "function_pointers.h"

/**
 * array_iterator - pass elements of an array to a function
 * @array : array to be passed
 * @size : size of array
 * @action : funtion to implement
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a = 0;

	if (array && action)
	{
	for (a = 0; a < size; a++)
		action(array[a]);
	}
}
