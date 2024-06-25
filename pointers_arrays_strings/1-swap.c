#include "main.h"
#include <unistd.h>

/**
 * swap_int - Entry point
 * Description: 'swaps two int values'
 *
 * @a: first int
 * @b: second int
 * Return: 0 (Success)
 */

int swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
	return (0);
}
