#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: 'prints numbers from 0 to 9 but skips 2 and 4'
 *
 * Return: 0 (Success)
 */

int print_most_numbers(void)
{
	char a;

	a = 48;
	while (a < 58)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
	return (0);
}
