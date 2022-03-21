#include "main.h"


/**
 * _strlen - Print str len
 * @s: string length
 *
 * Return: return void
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
