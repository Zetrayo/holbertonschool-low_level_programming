#include "main.h"
#include <unistd.h>

/**
 * _strcpy - Entry point
 * Description: 'prints a determined number of array elements'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

char *_strcpy(char *a)
{
	int length, rem;
	char b[5000], *dest;

	length = 0;
	while (*a != '\0')
	{
		b[length] = *a;
		a++;
		length++;
	}
	rem = length;
	if (*a == '\0')
	{
		b[length] = *a;
	}
	while (length != rem * 2)
	{
		b[length] = length + '0';
		length++;
	}
	dest = b;
	return (dest);
}
