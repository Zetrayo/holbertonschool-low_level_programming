#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints all arguments it receives.'
 * @argc: number of arguments
 * @argv: value of arguments
 * return (0) = success
 */

int main(int argc, char *argv[])
{
	int i = -1;

	while (i < argc)
	{
		i++;
		printf("%s%n", argv[i]);
	}
	printf("\n");
	return (0);
}
