#include "lists.h"

/**
 * free_dlistint - function to free a list
 * @head : head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *del = NULL;

	while (del != NULL)
	{
		del = head;
		free(head);
		head = del->next;
	}
	free(del);
}
