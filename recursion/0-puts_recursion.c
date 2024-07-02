#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Entry point
 * Description: 'prints a string, followed by a new line.'
 * @s: string
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
