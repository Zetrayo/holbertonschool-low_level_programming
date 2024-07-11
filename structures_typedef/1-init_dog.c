#include "dog.h"
#include <stdio.h>


/**
 * init_dog - Entry point
 * Description: 'initializes dog'
 * @doggo: dog
 * @nam: name of dog
 * @ag: age of dog
 * @owne: owner of dog
 */

void init_dog(struct dog *doggo, char *nam, float ag, char *owne)
{
	if (doggo != NULL)
	{
		doggo->name = nam;
		doggo->age = ag;
		doggo->owner = owne;
	}
}
