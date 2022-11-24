#include "lists.h"

/**
 * print_list- print all elements of a list_t list
 * @h: singly linked list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (a);
}
