#include <stdio.h>
#include <stdlib.h>

/**
 * **malloc_checked - Entry point
 * Description: 'allocates memory'
 * @b: how much memmory
 * Return: 98 (Fail)
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
