#include "main.h"
#include <unistd.h>

/**
 * print_diagsums - Entry point
 * Description: 'prints the sum of the diagonals of an array'
 *
 * @a: pointer pointing to array
 * @size: size of array
 * Return: 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i = 0, count1 = 0, count2 = 0, rem = size;

	while (size != 0)
	{
		count1 = count1 + a[i];
		i = i + rem + 1;
		size--;
	}
	size = rem;
	rem = rem - 1;
	i = rem;
	while (size != 0)
	{
		count2 = count2 + a[rem];
		rem = rem + i;
		size--;
	}
	printf("%d, %d\n", count1, count2);
}
