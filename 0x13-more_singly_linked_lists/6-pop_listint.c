#include "lists.h"

/**
 * pop_listint - delete head node of a linked list
 * @head: pointer to first element of the list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;

	if (*head == 0)
		return (0);
	(*head) = (*head)->next;
	return (tmp->n);
}
