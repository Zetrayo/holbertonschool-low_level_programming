#include "main.h"
#include <unistd.h>

/**
 * reverse_array - Entry point
 * Description: 'reverses an array'
 *
 * @a: pointer pointing to string
 * @n: number
 * Return: 0 (Success)
 */

int reverse_array(int *a, int n)
{
	int c = 0, copy = 0;

	while (c < n / 2)
	{
		copy = a[c];
		a[c] = a[n - 1 - c];
		a[n - 1 - c] = copy;
		c++;
	}
	return (*a);
}
