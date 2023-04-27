#include "lists.h"

/**
 * add_node - adds a node at beginning of a list
 * @head: head of the list
 * @str: data to be added
 * Return: address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = 0;
	while (new->str[new->len] != '\0')
		new->len++;
	new->next = *head;

	*head = new;
	return (*head);
}
