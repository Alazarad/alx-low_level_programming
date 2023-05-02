#include "lists.h"

/**
 * pop_listint - delete head node of a linked list
 * @head: pointer to first element of the list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	int a;

	if (*head == NULL)
		return (0);
	a = (*head)->n;
	(*head) = (*head)->next;
	return (a);
}
