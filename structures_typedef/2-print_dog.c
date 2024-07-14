#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Entry point
 * Description: 'prints dog'
 * @doggo: dog
 */

void print_dog(struct dog *doggo)
{
	if (doggo != NULL)
	{
		printf("Name: %s\n", doggo->name);
		printf("Age: %f\n", doggo->age);
		printf("Owner: %s\n", doggo->owner);
	}
}
