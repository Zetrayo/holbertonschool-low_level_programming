#include "main.h"
#include <unistd.h>

/**
 * rev_string - Entry point
 * Description: 'reverses a string'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

int rev_string(char *a)
{
	int length, rem;
	char b [100];

	length = 0;
	while (*a != '\0')
	{
		length++;
		a++;
	}

	rem = length;
	length = 0;
	while (length != rem)
	{
		b [length] = *a;
		a--;
		length++;
	}
	length = 0;
	while (length != rem)
	{
		*a = b[length];
		length++;
	}
	return (0);
}
