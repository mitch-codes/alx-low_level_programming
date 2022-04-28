#include <stdio.h>

/**
 * factorial- print factorial of number
 *
 * @n: number being factorialed
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
