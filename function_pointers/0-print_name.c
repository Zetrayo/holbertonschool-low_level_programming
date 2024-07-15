#include <stdio.h>

/**
 * print_name - prints the name
 * @name: name to print
 * @f: function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
