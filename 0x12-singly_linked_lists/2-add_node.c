#include "lists.h"

/**
 * add_node- add a new node at beginning
 * @head: head of the linked list
 * @str: string to store
 * Return: address of head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	size_t c;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	a->str = strdup(str);

	for (c = 0; str[c]; c++)
		;

	a->len = c;
	a->next = *head;
	*head = a;

	return (*head);
}
