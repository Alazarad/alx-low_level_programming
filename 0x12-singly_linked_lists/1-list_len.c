#include "lists.h"

/**
 * list_len - return the length of the list
 * @h: the head of the list
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
