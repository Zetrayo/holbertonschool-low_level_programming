#include "main.h"
#include <unistd.h>
void _putchar(char c);
int key = 0, i = 2;
/**
 * is_prime_number - Entry point
 * Description: 'returns 1 if the input integer is a prime number,
 * otherwise return 0.'
 * @n: number to test
 * Return: n (Success)
 */

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	if (n % i != 0)
	{
		if (i == 9)
		{
			return (1);
		}
		i++;
	}
	if (n % i == 0 && i == 9)
	{
		key = 1;
	}
	if (key == 0)
	{
		is_prime_number(n);
	}
	return (0);
}
