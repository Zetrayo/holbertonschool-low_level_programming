#include <stdio.h>

/**
 * main - Entry point
 * Description: 'adds positive numbers.'
 * @argc: number of arguments
 * @argv: value of arguments
 * return (0) = success
 */

int main(int argc, char *argv[])
{
	int a = 0, i = -1;

	if (argc == 0)
	{
		printf("0\n");
	}
	while (i < argc)
	{
		i++;
		if (argv[i] > 57 || argv[i] < 47)
		{
			printf("Error\n");
			return (1);
		}
	}
	i = -1;
	while (i < argc)
	{
		i++;
		a = a + *argv[i];
	}
	printf("%d", a);
	return (0);
}
