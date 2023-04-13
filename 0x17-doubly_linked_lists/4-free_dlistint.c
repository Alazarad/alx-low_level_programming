#include "lists.h"

/**
 * free_dlistint - function to free a list
 * @head : head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *del = head;
	dlistint_t *temp = NULL;

	while (del != NULL)
	{
		temp = del;
		del = del->next;
		free(temp);
	}
}
