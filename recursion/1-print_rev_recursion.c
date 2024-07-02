#include "main.h"
#include <unistd.h>
void _putchar(char c);
int i = 0, key = 0;
/**
 * _print_rev_recursion - Entry point
 * Description: 'prints a string in reverse.'
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0' && key == 0)
	{
		s++;
		i++;
	}
	if (*s == '\0')
	{
		key = 1;
	}
	if (i != 0 && key == 1)
	{
		s--;
		i--;
		_putchar(*s);
	}
	_print_rev_recursion(s);
}
