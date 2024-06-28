#include "main.h"
#include <unistd.h>

/**
 * _strncpy - Entry point
 * Description: 'prints a determined number of array elements'
 *
 * @dest: pointer pointing to string
 * @src: pointer pointing to string
 * @n: number of characters to copy
 * Return: 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	if (n > 0)
	{
		n = 25;
	}
	
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
