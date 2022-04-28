#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * op_add - add two numbers
 *
 * @a: first number
 * @b: second number
 * Return: int result
 */
int op_add(int a, int b)
{
	int result;
	result = a + b;
	return (result);
}

/**
 * op_sub - sub two numbers
 *
 * @a: first number
 * @b: second number
 * Return: int result
 */
int op_sub(int a, int b)
{
	int result;
	result = a - b;
	return (result);
}

/**
 * op_mul - mul two numbers
 *
 * @a: first number
 * @b: second number
 * Return: int result
 */
int op_mul(int a, int b)
{
	int result;
	result = a * b;
	return (result);
}

/**
 * op_div - div two numbers
 *
 * @a: first number
 * @b: second number
 * Return: int result
 */
int op_div(int a, int b)
{
	int result;
	result = a / b;
	return (result);
}

/**
 * op_mod - find remainder
 *
 * @a: first number
 * @b: second number
 * Return: int result
 */
int op_mod(int a, int b)
{
	int result;
	result = a % b;
	return (result);
}
