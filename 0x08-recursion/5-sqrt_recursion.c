#include <stdio.h>
#include "main.h"

/**
 * reload- add an incremental argument for comparison
 *
 * @num: number being square rooted
 * @i: incremented number
 * Return: the square root
 */
int reload(int num, int i)
{
	if (i > num)
	{
		return (-1);
	}
	if (i * i == num)
	{
		return (i);
	}
	return (reload(num, i + 1));
}
/**
 * _sqrt_recursion- find the square root of a number
 *
 * @n: number being found out square root
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (reload(n, i));
}
