#include <stdlib.h>
#include "3-calc.h"

/**
 * main - converts string into int and sends it for operation
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf ("Error\n");
		exit (98);
	}
	if (atoi (argv[3]) <= 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf ("Error\n");
		exit (100);
	}
	if (*argv[2] == '*' || *argv[2] == '/' || *argv[2] == '+' ||
		*argv[2] == '-' || *argv[2] == '%')
	{
		get_op_func(argv[2])(atoi (argv[1]), atoi (argv[3]));
	}
	printf ("Error\n");
	exit (99);
}
