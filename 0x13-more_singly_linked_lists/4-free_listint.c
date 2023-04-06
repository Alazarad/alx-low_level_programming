#include "lists.h"

/**
 * free_listint - free a singly linked list
 * @head: first element of the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
	}
}
