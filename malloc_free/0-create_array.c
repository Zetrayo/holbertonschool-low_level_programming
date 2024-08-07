#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Entry point
 * Description: 'creates and array and initializes with c.'
 * @size: size of array
 * @c: char
 * Return: NULL (Fail) , ptr (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size <= 0)
	{
		return (NULL);
	}
	while (i != size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
