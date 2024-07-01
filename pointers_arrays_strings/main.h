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
char *string_toupper(char *a);
char *cap_string(char *a);
char *leet(char *a);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

char *cheto(char *a)
{
	int c = 0;

	while (*a != '\0')
	{
		if (*a == 65 || *a == 97)
		{
			*a = 52;
		}
		if (*a == 69 || *a == 101)
		{
			*a = 51;
		}
		if (*a == 79 || *a == 111)
		{
			*a = 48;
		}
		if (*a == 84 || *a == 116)
		{
			*a = 55;
		}
		if (*a == 76 || *a == 108)
		{
			*a = 49;
		}
		a++;
		c++;
		}
		while (c != 0)
	{
		a--;
		c--;
	}
	return (a);
}

#endif