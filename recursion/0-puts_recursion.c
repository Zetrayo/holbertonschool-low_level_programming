#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Entry point
 * Description: 'prints a string, followed by a new line.'
 * @s: string
 */
void _putchar(char c);
void _puts_recursion(char *s)
{
	int key = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		key = 1;
	}
	if (key == 0)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
