#include <stdio.h>

/**
 * int_index - searches for int
 * @array: array
 * @size: size of array
 * @cmp: function
 *
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0, b = 0;

	if (size <= 0)
	{
		return (-1);
	}
	while (a < size)
	{
		b = (*cmp)(array[a]);
		if (b == 1)
		{
			return (a);
		}
		a++;
	}
	return (-1);
}
