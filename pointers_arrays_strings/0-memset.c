#include "main.h"
#include <unistd.h>

/**
 * _memset - Entry point
 * Description: 'fill a memory with a constant byte'
 *
 * @s: pointer pointing to string
 * @b: what the string needs to be replaced by
 * @n: how many placements nned to change
 * Return: 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	while (n != 0)
	{
		*s = b;
		s++;
		c++;
		n--;
	}
	while (c != 0)
	{
		s--;
		c--;
	}
	return (s);
}
