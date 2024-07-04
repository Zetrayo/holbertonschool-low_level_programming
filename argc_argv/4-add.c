#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: 'adds positive numbers.'
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a = 0, i = 1;
	char *output;

	if (argc == 0)
	{
		printf("0\n");
	}
	while (i < argc)
	{
		if (strtol(argv[i], &output, 10) == 9)
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		a = a + strtol(argv[i], &output, 10);
		i++;
	}
	printf("%d\n", a);
	return (0);
}
