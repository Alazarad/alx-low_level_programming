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
	int a = 0;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	while (str[a] != '\0')
		a++;
	new->len = a;
	new->next = *head;

	*head = new;
	return (*head);
}
