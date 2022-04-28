#include <stdio.h>

/**
 * _islower - check if character is in lowercase
 * @c:_islower parameter type int
 *
 * Return: Always 0 (Success)
*/
int _islower(int c)
{
	if (c >= 89)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
