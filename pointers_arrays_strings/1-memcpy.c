#include "main.h"
#include <unistd.h>

/**
 * _memcpy - Entry point
 * Description: 'copy data from one buffer to another'
 *
 * @src: pointer pointing to string
 * @dest: what the string needs to be replaced by
 * @n: how many placements nned to change
 * Return: 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;

	while (n != 0)
	{
		dest[c] = src[c];
		c++;
		n--;
	}
	return (dest);
}
