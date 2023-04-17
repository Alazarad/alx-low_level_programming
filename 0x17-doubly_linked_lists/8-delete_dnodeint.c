#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a specified node
 * @head : first element of the list
 * @index : index to be deleted
 * Return: 1 if successful and -1 unsuccessful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *first;
	dlistint_t *second;
	unsigned int a = 0;

	first = *head;

	if (first != NULL)
		while (first->prev != NULL)
			first = first->prev;
	while (first != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = first->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				second->next = first->next;
				if (first->next != NULL)
					first->next->prev = second;
			}
			free(first);
			return (1);
		}
		second = first;
		first = first->next;
		a++;
	}
	return (-1);
}
