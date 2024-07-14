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
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
    a = 0;
	while (a < nmemb * size)
	{
		ptr[a] = 0;
		a++;
	}
	return (ptr);
}
