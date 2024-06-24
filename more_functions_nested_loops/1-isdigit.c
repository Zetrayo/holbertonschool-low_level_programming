#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: 'returns 1 if c is a digit , else 0'
 *
 * @c: Variable
 * Return: Always 0 (Success)
 */

int _isdigit(char c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}
