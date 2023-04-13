#include "lists.h"

/**
 * print_dlistint - print elements of a list
 * @h: pointer to head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		a++;
	}
	return (a);
}
