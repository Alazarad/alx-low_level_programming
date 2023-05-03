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

	if (index != 0)
	{
		while (a < index - 1 && temp != NULL)
			temp = temp->next;
	}

	if (temp == NULL || (temp->next == NULL && index != 0))
		return (-1);

	tmp = temp->next;

	if (index != 0)
	{
		temp->next = tmp->next;
		free(tmp);
	}
	else
	{
		free(temp);
		*head = tmp;
	}
	return (1);
}
