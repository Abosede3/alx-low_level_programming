#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: head of linked list
 * @index: index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h;
	listint_t *t;

	if (head == NULL || (*head) == NULL)
		return (-1);

	h = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(h);
		return (1);
	}

	while (index != 1)
	{
		if (h->next == NULL)
			return (-1);

		h = h->next;
		--index;
	}
	t = h->next;
	if (h->next->next)
    		  h->next = h->next->next;
	else
		  h->next = NULL;
	free(t);

	return (1);
}
