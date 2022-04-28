#include <stdio.h>

/**
 * _abs - turns number into its absolute value
 * @n: integer parameter being checked
 *
 * Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
