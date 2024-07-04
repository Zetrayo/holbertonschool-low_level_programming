#include <stdio.h>
#include <stdlib.h>

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
    char *output;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = (strtol(argv[1], &output, 10)) * (strtol(argv[2], &output, 10));
	printf("%d\n", a);
	return (0);
}
