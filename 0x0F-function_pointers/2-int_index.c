#include "function_pointers.h"

/**
 * int_index - find the index of the required function
 * @array : array to be searched in
 * @size : size of the array
 * @cmp : function to search for
 * Return: first instance of the element found
 * -1 if size is <= 0 and no elements match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size <= 0)
		return (-1);
	while (a < size)
	{
		if (cmp(array[a]) != 0)
			return (a);
		a++;
	}
	return (-1);
}
