#include <stdio.h>
#include "main.h"

/**
 * primer- add an incremental argument for comparison
 *
 * @num: number being evaluated
 * @i: halfed number
 * Return: is it a prime number or not
 */
int primer(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (num % i == 0)
	{
		return (0);
	}
	return (primer(num, i - 1));
}
/**
 * is_prime_number- find out if a number is a prime number
 *
 * @n: number being evaluated
 * Return: 1 if its a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primer(n, n / 2));
}
