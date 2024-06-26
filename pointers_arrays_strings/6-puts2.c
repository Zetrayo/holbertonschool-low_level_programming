#include "main.h"
#include <unistd.h>

/**
 * puts2 - Entry point
 * Description: 'prints 1 out of 2 characters in a string'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

int puts2(char *a)
{
	char c;
	int b;

	b = 0;
	while (*a != '\0')
	{
		c = *a;
		if (b % 2 == 0)
		{
			_putchar (c);
		}
		b++;
		a++;
	}
	_putchar ('\n');
	return (0);
}
