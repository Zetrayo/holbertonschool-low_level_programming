#include <dog.h>

/**
 * init_dog - Entry point
 * Description: 'initializes dog'
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *nam, float ag, char *owne)
{
	struct dog d = {.name = nam, .age = ag, .owner = owne};
}
