#include "main.h"

/**
 * print_line - Entry point
 * Description: 'prints _ based on variable'
 *
 * @c: number of times _ must be placed
 * Return: 0 (Success)
 */

int print_line(int c)
{
	while (c > 0)
	{
		_putchar('_');
		c--;
	}
	_putchar('\n');
	return (0);
}
