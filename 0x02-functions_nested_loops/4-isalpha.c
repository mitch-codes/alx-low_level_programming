#include <stdio.h>

/**
 * _isalpha - check if character is in lowercase
 * @c:_islower parameter type int
 *
 * Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
