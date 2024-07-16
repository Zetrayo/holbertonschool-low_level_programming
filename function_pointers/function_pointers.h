#ifndef STDIO_H_
#define STDIO_H_

#include <stdio.h>

#endif

#ifndef CALC_H_
#define CALC_H_

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
