#include "main.h"

/**
 * print_diagonal - Entry point
 * Description: 'prints \ based on variable'
 *
 * @c: number of times ' ' must be placed before \
 *
 * Return: 0 (Success)
 */

int print_diagonal(int c)
{
	int a, b;

	a = 0;
	while (a <= c)
	{
		if (a > 1)
		{
			b = a;
			while (b > 1)
			{
				_putchar(' ');
				b--;
			}
		}

		if (a > 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
		a++;
	}
	return (0);
}
