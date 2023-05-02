#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at specified index
 * @head: first element of the list
 * @idx: place to put node
 * @n: data to be placed
 * Return: address of the new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int a = 0;

	if (new == NULL)
		return (NULL);
	while (temp != NULL && a != (idx - 1))
	{
		temp = temp->next;
		a++;
	}
	if (a != (idx - 1))
		return (NULL);
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
