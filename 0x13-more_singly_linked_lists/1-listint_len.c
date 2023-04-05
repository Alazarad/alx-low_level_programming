#include "lists.h"

/**
 * listint_len - finds the number of elements in a linked list
 * @h: pointer to first element of the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
