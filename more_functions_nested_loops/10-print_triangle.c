#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints a triagle using #'
 *
 * @b: number of # at the base of the triangle
 * Return: 0 (Success)
 */

int main(int b)
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
	_putchar('\n');
	return (0);
}
