#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#ifndef MAIN_H_
#define MAIN_H_

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif