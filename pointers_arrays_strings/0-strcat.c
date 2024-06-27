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
	while (*a != '\0')
	{
		a++;
	}
	while (*b != '\0')
	{
		*a = *b;
		b++;
		a++;
	}
	return (a);
}
