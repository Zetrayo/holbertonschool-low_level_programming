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
	int *ptr;

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
