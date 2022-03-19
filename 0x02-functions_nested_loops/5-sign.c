#include "main.h"


/**
 * print_sign - Entry point
 * @n: this is an int
 *
 * Return: return 1 for success or 0 for failed
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
