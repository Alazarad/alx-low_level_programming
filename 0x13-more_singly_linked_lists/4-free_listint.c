#include "lists.h"

/**
 * free_listint - free a singly linked list
 * @head: first element of the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	if (head == NULL)
		free(head);
	else
	{
		while (head != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}
