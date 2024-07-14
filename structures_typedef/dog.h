#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Entry point
 * Description: 'is dog'
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct my_dog
{
	char *name;
	float age;
	char *owner;
} dog_t, dog;

void init_dog(struct my_dog *doggo, char *nam, float ag, char *owne);
void print_dog(struct my_dog *doggo);

#endif
