#include "lists.h"

/**
 * get_nodeint_at_index - find the node at the index
 * @head: first element of the list
 * @index: index of element to be found
 * Return: the indexed node or
 * NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *find = head;

	while (find != NULL && a < index)
	{
		find = find->next;
		a++;
	}
	if (a != index)
		return (NULL);
	return (find);
}
