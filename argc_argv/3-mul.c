#include <stdio.h>

/**
 * main - Entry point
 * Description: 'multiplies two numbers.'
 * @argc: number of arguments
 * @argv: value of arguments
 * return (0) = success
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	a = (*argv[1] + '0') * (*argv[2] + '0');
	printf("%d", a);
	return (0);
}
