#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - Entry point
 * Description: 'prints a string in reverse.'
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i != 0)
	{
		s--;
		i--;
		putchar(*s);
	}
}
