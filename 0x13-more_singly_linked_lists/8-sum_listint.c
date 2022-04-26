#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *new;
	int result = 0;

	if (head == NULL)
		return (0);

	new = head;

	while (new != NULL)
	{
		result += new->n;
		new = new->next;
	}

	return (result);
}
