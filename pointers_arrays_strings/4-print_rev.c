#include "main.h"
#include <unistd.h>

/**
 * print_rev - Entry point
 * Description: 'prints a string in reverse'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

int print_rev(char *a)
{
	char c, b;

	b = *a;
	while (*a != '\0')
	{
		a++;
	}
	while (*a != b)
	{
		c = *a;
		_putchar (c);
		a--;
	}
	_putchar ('\n');
	return (0);
}
