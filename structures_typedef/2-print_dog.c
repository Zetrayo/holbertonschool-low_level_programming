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
		printf("%s", doggo->name);
		printf("%f", doggo->age);
		printf("%s", doggo->owner);
	}
}
