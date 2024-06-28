#include "main.h"
#include <unistd.h>

/**
 * *string_toupper - Entry point
 * Description: 'all lowercase become uppercase'
 *
 * @a: pointer pointing to string
 * Return: 0 (Success)
 */

char *string_toupper(char *a)
{
	int c = 0;

	while (*a != '\0')
	{
		if (*a <= 122 && *a >= 97)
		{
			*a = *a - 32;
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
