#include "main.h"
#include <unistd.h>

/**
 * _sqrt_recursion - Entry point
 * Description: 'returns the natural square root of a number.'
 * @n: number to test
 * Return: n (Success)
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	while (i * i != n)
	{
		i++;
	}
	return (i);
}
