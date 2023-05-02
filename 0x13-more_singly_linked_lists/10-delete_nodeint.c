#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at specified index
 * @head: first element of the list
 * @index: place of node to be deleted
 * Return: 1 if successful -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *tmp = malloc(sizeof(listint_t));
	unsigned int a = 0;

	if (head == NULL)
		return (-1);
	while (temp != NULL && a < index)
	{
		tmp = temp;
		temp = temp->next;
		a++;
	}
	if (a != (index - 1))
		return (-1);
	tmp->next = temp->next;
	free(temp);
	return (1);
}

