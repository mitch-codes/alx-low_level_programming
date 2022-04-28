#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_them_all - add variadic arguments given the number of arguments
 *
 * @n: the first argument indicating number of digits
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list ptr;

	if (n == 0)
	{
		return (0);
	}
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ptr, unsigned int);
	}
	va_end(ptr);
	return (sum);
}


