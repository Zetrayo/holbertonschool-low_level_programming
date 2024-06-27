#include "main.h"
#include <unistd.h>

/**
 * _strcat - Entry point
 * Description: 'puts 2 strings together'
 *
 * @a: pointer pointing to string
 * @b: pointer pointing to string
 * Return: 0 (Success)
 */

char *_strcat(char *a, char *b)
{
	int c = 0;
	while (*a != '\0')
	{
		a++;
		c++;
	}
	while (*b != '\0')
	{
		*a = *b;
		b++;
		a++;
		c++;
	}
	while (c != 0)
	{
		a--;
		c--;
	}
	return (a);
}