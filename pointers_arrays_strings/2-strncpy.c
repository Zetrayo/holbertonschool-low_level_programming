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
	char e[100];

	while (d != 0)
	{
		e[c] = *b;
		a++;
		c++;
		b++;
		d--;
	}
	while (*a != '\0')
	{
		if (n == 0)
		{
			break;
		}
		e[c] = *a;
		a++;
		c++;
		n--;
	}
	e[c] = '\0';
	return (e);
}
