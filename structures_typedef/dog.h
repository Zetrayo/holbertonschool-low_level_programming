#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Entry point
 * Description: 'is dog'
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *doggo, char *nam, float ag, char *owne);
void print_dog(struct dog *doggo);

#endif
