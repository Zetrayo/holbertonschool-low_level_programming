#include "main.h"

/**
 * more_numbers - Entry point
 * Description: 'prints numbers from 0 to 14 , 10 times'
 *
 * Return: 0 (Success)
 */

int more_numbers(void)
{
	int b, a, u, d;

	b = 0;
	a = 0;
	while (a < 10)
	{
		while (b < 15)
		{
			u = b % 10;
			d = (b - u) / 10;
			if (b > 9)
			{
				_putchar(d + '0');
			}
			_putchar(u + '0');
			b++;
		}
		a++;
		b = 0;
		_putchar('\n');
	}
	return (0);
}
