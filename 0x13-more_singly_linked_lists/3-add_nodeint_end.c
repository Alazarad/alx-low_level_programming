#include "lists.h"

/**
 * add_nodeint_end - add an element at the end to a singly linked list
 * @head: pointer to last node
 * @n: data to be stored in new element
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *del;

	(void)del;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	del = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (del->next != NULL)
		{
			del = del->next;
		}
		del->next = new;
	}

	return (*head);
}
