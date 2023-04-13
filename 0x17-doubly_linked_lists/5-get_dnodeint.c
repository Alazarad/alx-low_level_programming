#include "lists.h"

/**
 * get_dnodeint_at_index - get the specified node
 * @head: first element of the list
 * @index: the element the function should retrieve
 * Return: the specified node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;
	dlistint_t *find = NULL;

	if (head == NULL)
		return (NULL);

	find = head;
	for (a = 0; a < index; a++)
		find = find->next;
	return (find);
}
