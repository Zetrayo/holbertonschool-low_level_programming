#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Entry point
 * Description: 'allocates memory for array'
 * @nmemb: array length
 * @size: size of things in array
 * Return: NULL (Fail)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr, a = 0, b;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	b = nmemb - 1;
	while (a != b)
	{
		ptr[a] = 0;
		a++;
	}
	ptr[a] = 0;
	return (ptr);
}
