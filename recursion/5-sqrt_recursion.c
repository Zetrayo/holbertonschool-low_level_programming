#include "main.h"
#include <unistd.h>
void _putchar(char c);
int count = 1, key = 0, i = 0, rem;
/**
 * _sqrt_recursion - Entry point
 * Description: 'returns the natural square root of a number.'
 * @n: number to test
 * Return: n (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (i * i != n)
	{
		i++;
	}
	if (i * i == n)
	{
		key = 1;
	}
	if (key == 0)
	{
		_sqrt_recursion(n);
	}
	return (i);
}
