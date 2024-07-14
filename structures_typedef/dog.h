#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Entry point
 * Description: 'is dog'
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *doggo, char *nam, float ag, char *owne);
void print_dog(struct dog *doggo);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int _strlen(char *s)
{
	int count = 0;

	if (s != '\0')
	{
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}

#endif
