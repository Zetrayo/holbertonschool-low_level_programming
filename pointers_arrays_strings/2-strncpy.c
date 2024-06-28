#include "main.h"
#include <unistd.h>

/**
 * _strncpy - Entry point
 * Description: 'prints a determined number of array elements'
 *
 * @a: pointer pointing to string
 * @b: pointer pointing to string
 * @n: number of characters to copy
 * Return: 0 (Success)
 */

char *_strncpy(char *a, char *b, int n)
{
	int c = 0, d = n;

	while (d != 0)
	{
		a++;
		c++;
		b++;
		d--;
	}
	while (*b != '\0')
	{
		if (n == 0)
		{
			break;
		}
		*a = *b;
		b++;
		a++;
		c++;
		n--;
	}
	*a = '\0';
	while (c != 0)
	{
		a--;
		c--;
	}
	return (a);
}
