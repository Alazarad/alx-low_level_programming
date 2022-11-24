#include "lists.h"

/**
 * print_list- print all elements of a list_t list
 * @h: singly linked list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		a++;
		h = h->next;
	}
	return (a);
}
