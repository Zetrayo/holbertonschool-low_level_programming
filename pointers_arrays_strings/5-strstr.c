#include "main.h"
#include <unistd.h>

/**
 * _strstr - Entry point
 * Description: 'find the first occurrence of a char'
 *
 * @haystack: pointer pointing to string
 * @needle: string to find
 * Return: 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack != '\0')
	{
		while (*needle == *haystack)
		{
			needle++;
			haystack++;
			i++;
			if (*needle == '\0')
			{
				while (i != 0)
				{
					haystack--;
					i--;
				}
				return (haystack);
			}
		}
		while (i != 0)
		{
			needle--;
			haystack--;
			i--;
		}
		haystack++;
	}
	return (NULL);
}
