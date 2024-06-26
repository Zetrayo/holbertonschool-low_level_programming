#include "main.h"
#include <unistd.h>

/**
 * _strlen - Entry point
 * Description: 'counts string lenght'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

int _strlen(char *a)
{
	int c;

	c = 0;
	while (*a != '\0')
	{
		c++;
		a++;
	}
	return (c);
}
