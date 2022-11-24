#include "lists.h"

/**
 * list_len- count the number of elements in a list
 * @h: singly linked list
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
		h  = h->next;
	return (a);
}
