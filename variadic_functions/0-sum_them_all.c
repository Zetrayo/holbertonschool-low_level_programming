#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 *
 * @n: ints to add
 * Return: The sum of its parameters or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	double sum = 0, i = 0;
	va_list a;

	va_start(a, n);
	while (i < n)
	{
		sum += va_arg(a, int);
		i++;
	}
	va_end(a);
	return (sum);
}
