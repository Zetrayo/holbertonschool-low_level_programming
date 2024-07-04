#include <stdio.h>

/**
 * main - Entry point
 * Description: 'multiplies two numbers.'
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = (*argv[1] - '0') * (*argv[2] - '0');
	printf("%d\n", a);
	return (0);
}
