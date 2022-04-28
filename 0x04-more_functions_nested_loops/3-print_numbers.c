#include <stdio.h>

/**
 * print_numbers - print numbers 0 to 9
 *
 * Return: always 0 (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}

