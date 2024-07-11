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
	int *ptr, a = 0;

	if (max < min)
	{
		return (NULL);
	}
	ptr = malloc(max * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (a <= max)
	{
		ptr[a] = min;
		a++;
		min++;
	}
	return (ptr);
}
