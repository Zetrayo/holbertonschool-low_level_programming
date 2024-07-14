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
		if (doggo->name != NULL)
		{
			printf("Name: %s\n", doggo->name);
		}
		if (doggo->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", doggo->age);
		if (doggo->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		if (doggo->owner != NULL)
		{
			printf("Owner: %s\n", doggo->owner);
		}
	}
}
