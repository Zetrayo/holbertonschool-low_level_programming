#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#ifndef MAIN_H_
#define MAIN_H_

int reset_to_98(int *a);
int swap_int(int *a, int *b);
int _strlen(char *a);
int _puts(char *a);
int print_rev(char *a);
int rev_string(char *a);
int puts2(char *a);
int puts_half(char *a);
int print_array(int *a, int b);
char *_strcpy(char *dest, char *src);
int _atoi(char *a);
char *_strcat(char *a, char *b);
char *_strncat(char *a, char *b, int n);
char *_strncpy(char *b, char *a, int n);
int _strcmp(char *a, char *b);
int reverse_array(int *a, int n);

#endif