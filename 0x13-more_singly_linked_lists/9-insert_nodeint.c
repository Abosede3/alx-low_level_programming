#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of linked list
 * @idx: index to insert the node
 * @n: new node data
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *h;

	if (head == NULL)
		return (0);
	h = malloc(sizeof(listint_t));
	if (!h)
		return (0);

	h->next = NULL;
	h->n = n;

	if (idx == 0)
	{
		h->next = *head;
		(*head) = h;
		return (h);
	}

	new = *head;

	while (idx != 1)
	{
		new = new->next;
		--idx;
		if (new == NULL)
		{
			free(h);
			return (NULL);
		}
	}
	h->next = new->next;
	new->next = h;

	return (h);
}
