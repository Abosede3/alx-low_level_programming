#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *saved;

	(void)saved;

	current = malloc(sizeof(listint_t));

	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = NULL;
	saved = *head;
	if (*head == NULL)
	{
		*head = current;
	}
	else
	{
		while (current->next != NULL)
		{
			saved = saved->next;
		}
		saved->next = current;
	}

	return (*head);
}
