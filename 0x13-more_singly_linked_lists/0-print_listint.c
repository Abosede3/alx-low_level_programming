#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numbers_nodes = 0;
	const listint_t *new = h;

	while (new != NULL)
	{
		printf("%i\n", new->n);
		current = new->next;
		numbers_nodes++;
	}
	return (numbers_nodes);
}
