#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t numberNodes = 0;
	const list_t *new = h;

	while (new != NULL)
	{
		printf("[%d] %s\n", new->len,
		new->str != NULL ? new->str : "(nil)");
		new = new->next;
		numberNodes++;
	}
	return (numberNodes);
}
