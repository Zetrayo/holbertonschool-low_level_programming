#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: 'returns 1 if c is uppercase , else 0'
 *
 * @c: Variable
 * Return: Always 0 (Success)
 */

int _isupper(char c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
