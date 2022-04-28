#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings into a new one
 *
 * @s1: first string
 * @s2: second string
 * Return: copied array
 */
char *str_concat(char *s1, char *s2)
{
	char *st;
	int i;
	int j;
	int l;
	int l1;
	int l2;

	/*if (s1 == 0 && s2 == 0)*/
	/*{*/
		/*return (0);*/
	/*}*/

	l1 = strlen(s1);
	l2 = strlen(s2);

	l = l1 + l2;
	st = malloc((sizeof(char) * l) + 1);
	if (st == 0)
	{
		return (0);
	}

	for (i = 0; i < l1; i++)
	{
		st[i] = s1[i];
	}
	for (j = 0; j <= l2; j++)
	{
		st[i + j] = s2[j];
	}
	return (st);
}
