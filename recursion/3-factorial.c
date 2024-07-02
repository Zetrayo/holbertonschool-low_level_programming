#include "main.h"
#include <unistd.h>

/**
 * factorial - Entry point
 * Description: 'returns the factorial of a given number.'
 * @n: number to increase
 * Return: n (Success)
 */

int factorial(int n)
{
	int count = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	while (n > 0)
	{
		count = n * count;
		n--;
	}
	return (count);
}
