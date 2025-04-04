#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	void *temp;

	if (head == NULL)
	{
		printf("Freed !\n");
		exit(0);
	}

	while (current->next)
	{
		temp = current->next;

		free(current);

		current = temp;
	}

	free(current);
}
