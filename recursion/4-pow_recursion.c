#include "main.h"
#include <unistd.h>
void _putchar(char c);
int count = 1, key = 3, rem;
/**
 * _sqrt_recursion - Entry point
 * Description: 'returns the value of x raised to the power of y.'
 * @x: number to increase
 * @y: number to multiply x by
 * Return: x (Success)
 */

int _pow_recursion(int x, int y)
{
	if (key == 3)
	{
		rem = x;
		key = 0;
	}
	if (y == 0 && key == 0)
	{
		return (1);
	}
	if (y < 0 && key == 0)
	{
		return (-1);
	}
	if (y > 0 && key == 0)
	{
		x = x * rem;
		y--;
	}
	if (y == 1 && key == 0)
	{
		key = 1;
	}
	if (key == 0)
	{
		_pow_recursion(x, y);
	}
	if (key == 1)
	{
		rem = x;
		key = 4;
	}
	return (rem);
}
