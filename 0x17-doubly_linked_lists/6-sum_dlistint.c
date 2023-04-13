#include "lists.h"

/**
 * sum_dlistint - find the sum of elements in a list
 * @head : first element of a list
 * Return: result of the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int a = 0;
	dlistint_t *sum = head;

	if (head == NULL)
		return (0);

	while (sum != NULL)
	{
		a = a + sum->n;
		sum = sum->next;
	}
	return (a);
}
