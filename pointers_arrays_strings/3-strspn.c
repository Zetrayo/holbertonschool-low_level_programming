#include "main.h"
#include <unistd.h>

/**
 * _strspn - Entry point
 * Description: 'count number of occurrences of accept in s'
 *
 * @s: pointer pointing to string
 * @accept: string of what to find
 * Return: 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int b = 0, i = 0, c = 0;

	while (s[b] != '\0')
	{
		while (accept[i] != '\0')
		{
			if (accept[i] == s[b])
			{
				c++;
			}
			i++;
		}
		i = 0;
		b++;
		if (s[b] == ' ' || s[b] == ',' || s[b] == '.')
		{
			break;
		}
	}
	return (c);
}
