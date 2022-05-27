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
	int len = strlen(format);

	va_start(ptr, format);

	while (format[i] != 0)
	{
		if (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's')
		{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(ptr, int));
			break;

			case 'i':
			printf("%d", va_arg(ptr, int));
			break;

			case 'f':
			printf("%f", va_arg(ptr, double));
			break;

			case 's':
			printf("%s", va_arg(ptr, char *));
			break;
		}
		if (i != len - 1)
		{
			printf(", ");
		}
		}
		i++;
	}

	va_end(ptr);
}

