#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _atoi - Entry point
 * Description: 'prints 1 out of 2 characters in a string'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

int _atoi(char *a)
{
	int minu, plus;
	__int128_t val;

	minu = 0;
	plus = 0;
	val = 0;
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
				val = val + (*a - '0');
				a++;
				if (*a < 48 || *a > 57)
				{
					break;
				}
				val = val * 10;
			}
			if (minu > plus || minu % 2 != 0)
			{
				val = -val;
			}
			break;
		}
		a++;
	}
	return (val);
}
