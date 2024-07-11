#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - Entry point
 * Description: 'creates an array of ints'
 * @min: smallest int
 * @max: biggest int
 * Return: NULL (Fail)
 */

int *array_range(int min, int max)
{
	int *ptr, a = 0, size;

	size = max - min + 1;
	if (max < min)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (a < size)
	{
		ptr[a] = min;
		a++;
		min++;
	}
	return (ptr);
}
