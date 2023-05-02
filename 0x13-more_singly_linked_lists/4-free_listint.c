#include "lists.h"

/**
 * free_listint - free a list
 * @head: first element of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
