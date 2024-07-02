#include "main.h"
#include <unistd.h>

/**
 * print_chessboard - Entry point
 * Description: 'prints a chessboard'
 *
 * @a: pointer pointing to array
 * Return: 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, b = 0;

	while (i != 8)
	{
		while (b != 8)
		{
			putchar(a[i][b]);
			b++;
		}
		putchar('\n');
		b = 0;
		i++;
	}
}
