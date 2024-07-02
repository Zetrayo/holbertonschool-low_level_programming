#include "main.h"
#include <unistd.h>

/**
 * is_prime_number - Entry point
 * Description: 'returns 1 if the input integer is a prime number,
 * otherwise return 0.'
 * @n: number to test
 * Return: n (Success)
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 0 || n == 1)
	{
		return (0);
	}
	while (n % i != 0)
	{
		if (i == 9)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
