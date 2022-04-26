#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - add a node at the end of a linked list
 * @head: The character to print
 * @n: string for the new node
 *
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *nnode;

	h = *head;
	while (h && nnode->next != NULL)
		 h = h->next;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
	{
		free(nnode);
		return (NULL);
	}
	nnode->n = n;
	nnode->next = NULL;

	if (h)
		h->next = nnode;
	else
		*head = nnode;
	return (nnode);
}
