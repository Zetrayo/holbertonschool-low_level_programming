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
	unsigned int a = 0;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	ptr = (int *)malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (a <= nmemb)
	{
		ptr[a] = 0;
		a++;
	}
	return (ptr);
}
