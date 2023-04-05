#include "lists.h"

/**
 * add_nodeint - add a new node at the begining of a singly linked list
 * @head: pointer to the head node
 * @n: data to be stored in new element
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
