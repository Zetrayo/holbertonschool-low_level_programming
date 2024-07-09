#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Entry point
 * Description: 'returns ptr to 2D array'
 * @width: how wide array is
 * @height: how tall array is
 * Return: NULL (Fail) , ptr (Success)
 */

int **alloc_grid(int width, int height)
{
	int arr[2000][2000], i = 0, j = 0, *ptr;

	while (i < 2000)
	{
		while (j < 2000)
		{
			arr[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	*ptr = arr;
	return (ptr);
}
