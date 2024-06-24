#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * fizz_buzz - Entry point
 * Description: 'fizz buzz test'
 *
 *
 * Return: 0 (Success)
 */

int fizz_buzz(void)
{
	int a;

	a = 1;
	while (a != 100)
	{
		if (a % 3 == 0 && a % 5 == 0 && a != 0)
		{
			printf("FizzBuzz ");
			a++;
		}
		else if (a % 3 == 0 && a != 0)
		{
			printf("Fizz ");
			a++;
		}
		else if (a % 5 == 0 && a != 0)
		{
			printf("Buzz ");
			a++;
		}
		else
		{
			printf("%d ", a);
			a++;
		}
	}
	return (0);
}
