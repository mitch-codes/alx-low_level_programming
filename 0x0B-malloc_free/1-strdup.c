#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy string to memory location
 *
 * @str: array argument
 * Return: copied array
 */
char *_strdup(char *str)
{
	char *st;
	int i;
	int l;

	if (str == 0)
	{
		return (0);
	}

	l = strlen(str);
	st = malloc((sizeof(char) * l) + 1);
	if (st == 0)
	{
		return (0);
	}
	for (i = 0; i <= l; i++)
	{
		st[i] = str[i];
	}
	return (st);
}
