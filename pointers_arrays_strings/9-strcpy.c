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
	char b[5000];

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
	return (b);
}
