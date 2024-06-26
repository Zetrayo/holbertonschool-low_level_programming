#include "main.h"
#include <unistd.h>

/**
 * _strcpy - Entry point
 * Description: 'prints a determined number of array elements'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

int _strcpy(char *a)
{
	int size;
	char dest[5000];

	size = 0;
	while (*a != '\0')
	{
		dest[size] = *a;
		a++;
		size++;
	}
	if (*a == '\n')
	{
		dest[size] = *a;
	}
	return (dest);
}
