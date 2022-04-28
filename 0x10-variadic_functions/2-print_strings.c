#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_strings - print variadic functions
 *
 * @separator: separating string
 * @n: the first argument indicating number of digits
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *word;

	va_list ptr;

	va_start(ptr, n);

	for (i = 1; i <= n; i++)
	{
		word = va_arg(ptr, char *);

		if (word == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", word);
		}

		if (i != n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}


