#include "lists.h"
/**
 * print_listint - print a singly linked list
 * @h: pointer to first item in list
 * Return: number of elements of list
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
