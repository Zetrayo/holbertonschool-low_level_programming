#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @n: number of parameters
 * @separator: what to print in between numbers
 * Return: The sum of its parameters or 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list a;

	va_start(a, n);
	while (i < n)
	{
		printf("%d", va_arg(a, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(a);
}
