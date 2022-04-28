#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -concatination
 *
 * @s1: string being copied into
 * @s2: string being copied
 * @n: number of characters being copied
 * Return: string of final string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int j;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	ptr = malloc((strlen(s1) + n + 1) * sizeof(char));

	if (ptr == 0)
	{
		return (0);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		*(ptr + i) = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		*(ptr + i + j) = s2[j];
	}
	ptr[n + i] = '\0';
	return (ptr);
}
