#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 *
 * @n: number of parameters
 * @separator: what to print in between numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list a;

	va_start(a, n);
	while (i < n)
	{
		printf("%s", va_arg(a, char *));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(a);
}
