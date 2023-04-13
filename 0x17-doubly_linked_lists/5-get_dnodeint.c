#include "lists.h"

/**
 * get_dnodeint_at_index - get the specified node
 * @head: first element of the list
 * @index: the element the function should retrieve
 * Return: the specified node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int b = 0;
	dlistint_t *find = head;

	while (find != NULL && b < index)
	{
		b++;
		find = find->next;
		if (b == index)
			return (find);
	}
	return (NULL);
}
