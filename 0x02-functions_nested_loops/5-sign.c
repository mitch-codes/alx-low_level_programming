#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks if number is positive or negative
 * @n: integer parameter being checked
 *
 * Return: Always 0 (Success)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
