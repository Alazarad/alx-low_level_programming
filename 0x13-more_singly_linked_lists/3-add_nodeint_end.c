#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a list
 * @head: first element of the list
 * @n: data to be added
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	while (last_node != NULL && last_node->next != NULL)
		last_node = last_node->next;
	if (last_node == NULL)
		*head = new;
	else
		last_node->next = new;
	return (new);
}
