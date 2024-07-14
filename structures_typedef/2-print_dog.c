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
		printf("%s\n", doggo->name);
		printf("%f\n", doggo->age);
		printf("%s\n", doggo->owner);
	}
}
