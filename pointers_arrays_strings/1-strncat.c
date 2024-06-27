#include "main.h"
#include <unistd.h>

/**
 * _strncat - Entry point
 * Description: 'puts 2 strings together'
 *
 * @a: pointer pointing to string
 * @b: pointer pointing to string
 * Return: 0 (Success)
 */

char *_strncat(char *a, char *b, int n)
{
	int c = 0;

	while (*a != '\0')
	{
		a++;
		c++;
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
	while (c != 0)
	{
		a--;
		c--;
	}
	return (a);
}
