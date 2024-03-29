#include "lists.h"

/**
 * listint_len- count the number of elements in a linked list
 * @h: head of the list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
