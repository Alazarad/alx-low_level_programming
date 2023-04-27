#include "lists.h"

/**
 * free_list - free a singly linked list
 * @head: first element of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *del = head;

	while (del)
	{
		list_t *tmp = del;

		del = del->next;
		free(tmp);
	}
}
