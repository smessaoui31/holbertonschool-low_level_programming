#include "lists.h"

/**
 * add_dnodeint - creates a new node at the beginning of the list
 * @head: head of the list
 * @n: data of the node
 *
 * Return: address of the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
		new->next = NULL;
	else
	{
		temp = *head;
		temp->prev = new;

		new->next = *head;
	}

	*head = new;

	return (new);
}
