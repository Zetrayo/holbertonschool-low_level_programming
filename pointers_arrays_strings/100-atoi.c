#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * puts2 - Entry point
 * Description: 'prints 1 out of 2 characters in a string'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

int _atoi(char *a)
{
	int minu, plus, val;

	minu = 0;
	plus = 0;
	while (*a != '\0')
	{
		if (*a == '-')
		{
			minu++;
		}
		if (*a == '+')
		{
			plus++;
		}
		if (*a <= 57 && *a >= 48)
		{
			while (*a <= 57 && *a >= 48)
			{
				val = *a + '0';
			}
			if (minu > plus)
			{
				val = -val;
			}
		}
		a++;
	}
	_putchar ('\n');
	return (0);
}
