#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print the last digit of numbers
 * @n: integer parameter being checked
 *
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int num;

	if (n >= 10)
	{
		num = n % 10;
		_putchar(num + '0');
		return (num);
	}
	else if (n < 10 && n >= 0)
	{
		num = n;
		_putchar(num + '0');
		return (num);
	}
	else if (n < 0 && n > -10)
	{
		num = n * -1;
		_putchar(num + '0');
		return (num);
	}
	else
	{
		num = (n * -1) % 10;
		_putchar(num + '0');
		return (num);
	}
}
