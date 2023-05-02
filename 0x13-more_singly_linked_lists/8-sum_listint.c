#include "lists.h"

/**
 * sum_listint - find the sum of all data in the linked list
 * @head: first element of the list
 * Return: sum of elements or NULL (if the list is empty)
 */

int sum_listint(listint_t *head)
{
	int a = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (0);
	while (temp != 0)
	{
		a += temp->n;
		temp = temp->next;
	}
	return (a);
}
