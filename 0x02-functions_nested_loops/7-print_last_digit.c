#include "main.h"


/**
 * print_last_digit - Entry point
 * @n: last digit num
 *
 * Return: return last digit number
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
