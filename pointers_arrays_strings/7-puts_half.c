#include "main.h"
#include <unistd.h>

int _putchar(char r);

/**
 * puts_half - Entry point
 * Description: 'prints the second half of a string'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

int puts_half(char *a)
{
	int c, rem;

	c = 0;
	while (*a != '\0')
	{
		c++;
		a++;
	}
	rem = c;
	if (rem % 2 != 0)
	{
		c = (rem - 1) / 2;
	}
	else if (rem % 2 == 0)
	{
		c = rem / 2;
	}
	while (c != 0)
	{
		c--;
		a--;
	}
	while (*a != '\0')
	{
		c = *a;
		_putchar (c);
		a++;
	}
	_putchar ('\n');
	return (0);
}
