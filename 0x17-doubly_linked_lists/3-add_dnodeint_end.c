#include "lists.h"

/**
 * add_dnodeint_end - add a new node at end of list
 * @head : head of list
 * @n : data to be added
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last = NULL;

	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	new->prev = last;
	last->next = new;
	return (new);
}
