#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_array - Entry point
 * Description: 'prints a determined number of array elements'
 *
 * @a: pointer pointing to string
 * @b: int of how many elements of the array to print
 * Return: 0 (Success)
 */

int print_array(char *a, int b)
{
	long c;

	while (b > 0)
	{
		c = *a;
		printf("%ld, ", c);
		a++;
		b--;
	}
	printf("\n");
	return (0);
}
