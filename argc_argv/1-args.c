#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints the number of arguments passed into it.'
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (*argv[0] == 3)
	{
		return (0);
	}
	printf("%d\n", argc);
	return (0);
}
