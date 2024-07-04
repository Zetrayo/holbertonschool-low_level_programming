#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints all arguments it receives.'
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	printf("\n");
	return (0);
}
