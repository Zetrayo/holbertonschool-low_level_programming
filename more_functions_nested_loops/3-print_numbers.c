#include "main.h"

/**
 * print_numbers - Entry point
 * Description: 'prints numbers from 0 to 9'
 *
 * Return: 0 (Success)
 */

int print_numbers(void)
{
	char a;

	a = 48;
	while (a < 58)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
