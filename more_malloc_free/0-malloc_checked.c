#include <stdio.h>
#include <stdlib.h>

/**
 * **malloc_checked - Entry point
 * Description: 'allocates memory'
 * @b: how much memmory
 * Return: 98 (Fail)
 */

int malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
	{
		return (98);
	}
	return (*ptr);
}
