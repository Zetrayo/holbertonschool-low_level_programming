#include "main.h"
#include <unistd.h>
void _putchar(char c);
int count = 1, key = 0;
/**
 * factorial - Entry point
 * Description: 'returns the factorial of a given number.'
 * @n: number to increase
 * Return: n (Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 && key == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		count = n * count;
		n--;
	}
	if (n == 1)
	{
		key = 1;
	}
	if (key == 0)
	{
		factorial(n);
	}
	return (count);
}
