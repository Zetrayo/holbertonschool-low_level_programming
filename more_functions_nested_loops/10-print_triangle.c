#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * print_triangle - Entry point
 * Description: 'prints a triagle using #'
 *
 * @b: number of # at the base of the triangle
 * Return: 0 (Success)
 */

int print_triangle(int b)
{
	int a, c;

	c = 1;
	a = b - c;
	while (a >= 0)
	{
		while (a > 0)
		{
			_putchar(' ');
			a--;
		}
		while (a != c)
		{
			_putchar('#');
			a++;
		}
		if (b == 1)
		{
			_putchar('#');
		}
		_putchar('\n');
		c++;
		a = b - c;
	}
	if (b <= 0)
	{
		_putchar('\n');
	}
return (0);
}
