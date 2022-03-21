#include "main.h"


/**
 * swap_int - Swaps two integer
 * @a: first int
 * @b: second int
 *
 * Return: Alway return void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
