#include "main.h"
#include <unistd.h>

/**
 * _strcmp - Entry point
 * Description: 'prints a determined number of array elements'
 *
 * @a: pointer pointing to string
 * @b: pointer pointing to string
 * Return: 0 (Success)
 */

int _strcmp(char *a, char *b)
{
	int count = 0;

	while (*a == *b)
	{
		if (*a == '\0' && *b == '\0')
		{
			return (0);
		}
		a++;
		b++;
	}
	while (*a != '\0' || *b != '\0')
	{
		if (*a > *b)
		{
			count--;
		}
		else if (*a < *b)
		{
			count++;
		}
		a++;
		b++;
	}
	return (count);
}
