#include <stdio.h>

/**
 * array_iterator - prints the array using a function
 * @array: array
 * @size: size of array
 * @action: function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int a = 0;

	while (size > a)
	{
		(*action)(array[a]);
		a++;
	}
}
