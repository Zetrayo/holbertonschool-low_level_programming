#include "main.h"
#include <unistd.h>
int i = 0;
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
		return (i);
	}
	s++;
	i++;
	_strlen_recursion(s);
}
