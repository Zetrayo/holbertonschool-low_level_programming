#include <stdlib.h>
#include "3-calc.h"

/**
 * main - converts string into int and sends it for operation
 *
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: Success , else failure
 */
int main(int argc, char *argv[])
{
	int a = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '*' && *argv[2] != '/' && *argv[2] != '+' &&
		*argv[2] != '-' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) <= 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	a = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", a);
	return (0);
}
