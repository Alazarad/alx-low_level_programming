#include "lists.h"

/**
 * add_node_end - add a node to the end of a list
 * @head: the head of the list
 * @str: data to be added
 * Return: address of new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = 0;
	while (temp->str[temp->len] != '\0')
		temp->len++;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = temp;
	}

	return (temp);
}
