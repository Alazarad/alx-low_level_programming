#include "lists.h"

/**
 * free_listint2 - free a list while setting head to NULL
 * @head: first element of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
}
