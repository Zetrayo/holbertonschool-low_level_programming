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
	char *ptr = (char*)malloc(size * sizeof(char));
	int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	while (i != size)
	{
		*ptr = c;
		ptr++;
		i++;
	}
	return (ptr);
}
