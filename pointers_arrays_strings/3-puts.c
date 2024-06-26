#include "main.h"
#include <unistd.h>

/**
 * _puts - Entry point
 * Description: 'prints a string'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

int _puts(char *a)
{
	char c;

	while (*a != '\0')
	{
		c = *a;
		_putchar (c);
		a++;
	}
	_putchar ('\n');
	return (0);
}
