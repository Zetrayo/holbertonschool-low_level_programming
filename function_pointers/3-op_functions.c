#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two ints
 * @a: int 1
 * @b: int 2
 * Return: Result
 */
int op_add(int a, int b)
{
	int c = a + b;
	return (c);
}

/**
 * op_sub - substracts two ints
 * @a: int 1
 * @b: int 2
 * Return: Result
 */
int op_sub(int a, int b)
{
	int c = a - b;
	return (c);
}

/**
 * op_mul - multiplies two ints
 * @a: int 1
 * @b: int 2
 * Return: Result
 */
int op_mul(int a, int b)
{
	int c = a * b;
	return (c);
}

/**
 * op_div - divides two ints
 * @a: int 1
 * @b: int 2
 * Return: Result
 */
int op_div(int a, int b)
{
	int c = a / b;
	return (c);
}

/**
 * op_mod - returns remainder of division on two ints
 * @a: int 1
 * @b: int 2
 * Return: Result
 */
int op_mod(int a, int b)
{
	int c = a % b;
	return (c);
}
