#include "main.h"
#include <unistd.h>

/**
 * cap_string - Entry point
 * Description: 'first lowercase become uppercase'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

char *cap_string(char *a)
{
	int c = 0, key = 0;

	while (*a != '\0')
	{
		if (*a <= 96 && *a >= 0)
		{
			key = 1;
		}
		if (*a <= 126 && *a >= 123)
		{
			key = 1;
		}
		if (*a == 32 || *a == 44 || *a == 59 || *a == 46)
		{
			key = 0;
		}
		if (*a == 33 || *a == 63 || *a == 34 || *a == 40)
		{
			key = 0;
		}
		if (*a == 41 || *a == 123 || *a == 125 || *a == 9 || *a == '\n')
		{
			key = 0;
		}
		if (*a <= 122 && *a >= 97 && key == 0)
		{
			*a = *a - 32;
			key = 1;
		}
		a++;
		c++;
	}
	while (c != 0)
	{
		a--;
		c--;
	}
	return (a);
}
