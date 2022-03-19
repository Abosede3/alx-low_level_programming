#include "main.h"


/**
 * _islower - Entry point
 * @c: c is an ascii character
 *
 * Return: returns 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
