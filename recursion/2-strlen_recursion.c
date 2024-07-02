#include "main.h"
#include <unistd.h>
int i = 0, key = 0;
/**
 * _strlen_recursion - Entry point
 * Description: 'returns the length of a string.'
 * @s: string
 * Return: c (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		key = 1;
	}
	if (key == 0)
	{
		s++;
		i++;
		_strlen_recursion(s);
	}
	return (i);
}
