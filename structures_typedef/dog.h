#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Entry point
 * Description: 'is dog'
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
