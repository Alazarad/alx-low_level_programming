#include "lists.h"

/**
 * print_list - print all elements of a list
 * @h: head of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] [%s]\n", h->len, h->str);
		length++;
		h = h->next;
	}

	return (length);
}
