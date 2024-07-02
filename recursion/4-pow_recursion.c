#include "main.h"
#include <unistd.h>

/**
 * _sqrt_recursion - Entry point
 * Description: 'returns the value of x raised to the power of y.'
 * @x: number to increase
 * @y: number to multiply x by
 * Return: x (Success)
 */

int _pow_recursion(int x, int y)
{
	int rem = x;

	if (y < 0)
	{
		return (-1);
	}
	while (y > 0)
	{
		x = x * rem;
		y--;
	}
	return (x);
}
