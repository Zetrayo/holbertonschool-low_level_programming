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
	int length;
	char b[5000], *dest;

	length = 0;
	while (*a != '\0')
	{
		b[length] = *a;
		a++;
		length++;
	}
	if (*a == '\0')
	{
		b[length] = *a;
	}
	while (length != 0)
	{
		a--;
		length--;
		b[length] = 5;
	}
	dest = b;
	return (dest);
}
