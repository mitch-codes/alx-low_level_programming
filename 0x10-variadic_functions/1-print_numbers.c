#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_numbers - print variadic functions
 *
 * @separator: separating string
 * @n: the first argument indicating number of digits
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ptr;

	va_start(ptr, n);

	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(ptr, unsigned int));
		if (i != n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}


