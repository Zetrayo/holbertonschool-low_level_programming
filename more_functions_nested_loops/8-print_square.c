#include "main.h"

/**
 * print_square - Entry point
 * Description: 'prints \ based on variable'
 *
 * @c: dimension of # square
 *
 * Return: 0 (Success)
 */

int print_square(int c)
{
	int a, b;

	a = c;
	while (a > 0)
	{
		b = c;
		while (b > 0)
		{
			_putchar('#');
			b--;
		}
		a--;
		if (a != 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
	return (0);
}
