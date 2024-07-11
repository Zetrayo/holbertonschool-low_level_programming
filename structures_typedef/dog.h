#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#ifndef DOG_H_
#define DOG_H_

struct dog
{
	char* name;
	float age;
	char* owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif