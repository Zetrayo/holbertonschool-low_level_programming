#include "main.h"
#include <unistd.h>

/**
 * _strchr - Entry point
 * Description: 'find the first occurrence of a char'
 *
 * @s: pointer pointing to string
 * @c: character to find
 * Return: 0 (Success)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == '\0')
	{
		return (NULL);
	}
	return (s);
}
