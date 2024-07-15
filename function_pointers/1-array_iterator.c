#include <stdio.h>

/**
 * print_name - prints the name
 * @array: array
 * @size: size of array
 * @action: function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a = 0;

	while (size > a)
	{
		(*action)(array[a]);
		a++;
	}
}
