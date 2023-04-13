#include "lists.h"

/**
 * dlistint_len - count length of list
 * @h : head of list to be counted
 * Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;
	const dlistint_t *temp = h;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		a++;
		temp = temp->next;
	}
	return (a);
}
