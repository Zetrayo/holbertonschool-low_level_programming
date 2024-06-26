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
	char c;
	int b;

	b = 0;
	while (*a != '\0')
	{
		b++;
		a++;
	}
	while (b != -1)
	{
		c = *a;
		_putchar (c);
		a--;
		b--;
	}
	_putchar ('\n');
	return (0);
}
