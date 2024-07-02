#include "main.h"
#include <unistd.h>

/**
 * _strpbrk - Entry point
 * Description: 'find the first occurrence of a char'
 *
 * @s: pointer pointing to string
 * @accept: character to find
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
			i++;
		}
		while (i != 0)
		{
			accept--;
			i--;
		}
		s++;
	}
	return (NULL);
}
