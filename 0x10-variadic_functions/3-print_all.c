#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_all - print acording to format specifier
 *
 * @format: format specifier
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ptr;
	va_start(ptr, format);

	while (format[i] != 0)
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(ptr, int));
		}
		if (format[i] == 'i')
		{
			printf("%d", va_arg(ptr, int));
		}
		if (format[i] == 'f')
		{
			printf("%f", va_arg(ptr, double));
		}
		if (format[i] == 's')
		{
			printf("%s", va_arg(ptr, char *));
		}
		i++;
	}

	va_end(ptr);
}

