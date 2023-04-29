#include "lists.h"

/**
 * add_nodeint - add a node at beginning of a list
 * @head: first element of the list
 * @n: data to be added
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
