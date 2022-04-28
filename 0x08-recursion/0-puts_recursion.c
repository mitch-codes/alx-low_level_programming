#include <stdio.h>

/**
 * _puts_recursion- prints the string in reverse
 *
 * @s: string being printed
 * Return: void no return
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
	else
	{
	printf("\n");
	}
}
