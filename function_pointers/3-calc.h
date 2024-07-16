#ifndef STDIO_H_
#define STDIO_H_

#include <stdio.h>

#endif

#ifndef CALC_H_
#define CALC_H_

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct opt - Entry point
 * Description: 'is structure'
 * @op: operation a realiser (+,-,/,*,%)
 * @func: function qui effectuera l'operation
 */
typedef struct opt
{
	char *op;
	int (*func)(int, int);
} op_t;

#endif
