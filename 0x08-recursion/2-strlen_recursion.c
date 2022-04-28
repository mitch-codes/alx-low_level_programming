#include <stdio.h>

/**
 * _strlen_recursion- counts bytes in string
 *
 * @s: string being counted
 * Return: count of characters
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
