#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'fizz buzz test'
 *
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	a = 1;
	while (a != 101)
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
		else if (a % 5 == 0 && a != 0 && a != 100)
		{
			printf("Buzz ");
			a++;
		}
		else if (a == 100)
		{
			printf("Buzz");
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
