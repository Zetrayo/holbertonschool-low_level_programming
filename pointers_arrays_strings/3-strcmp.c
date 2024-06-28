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
	while (*a == *b)
	{
		if (*a == '\0' && *b == '\0')
		{
			return(0);
		}
		a++; b++;
	}
	if (*a > *b)
	{
		return(-15);
	}
	else if (*a < *b)
	{
		return(15);
	}
	return(0);
}
