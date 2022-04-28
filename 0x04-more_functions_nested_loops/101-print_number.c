#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 *
 * Return: always 0 (Success)
 */
void print_number(int n)
{
	int absnum;

	if (n < 0)
	{
		putchar('-');
		absnum = n * -1;
	}
	else
	{
		absnum = n;
	}
	if (absnum < 10)
	{
		putchar(absnum + '0');
	}
	else
	{
		putchar((absnum / 10) + '0');
		putchar((absnum % 10) + '0');
	}
	putchar('\n');
}

