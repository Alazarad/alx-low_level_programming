#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *del;
	size_t c;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	a->str = strdup(str);

	for (c = 0; str[c]; c++)
		;

	a->len = c;
	a->next = NULL;
	del = *head;

	if (del == NULL)
	{
		*head = a;
	}
	else
	{
		while (del->next != NULL)
			del = del->next;
		del->next = a;
	}

	return (*head);
}
