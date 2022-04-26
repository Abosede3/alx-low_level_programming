#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int t;

	if (head == NULL)
		return (0);

	new = *head;
	if (new == NULL)
		return (0);

	t = new->n;
	*head = new->next;
	free(new);
	return (t);
}
