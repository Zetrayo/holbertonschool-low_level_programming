#ifndef CALC_H_
#define CALC_H_

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct pter
{
	char *test;
	void (*printer)();
} pt;

#endif
