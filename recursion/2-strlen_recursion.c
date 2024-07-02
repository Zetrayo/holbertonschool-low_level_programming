#include "main.h"
#include <unistd.h>

/**
 * _strlen_recursion - Entry point
 * Description: 'returns the length of a string.'
 * @s: string
 * Return: c (Success)
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
