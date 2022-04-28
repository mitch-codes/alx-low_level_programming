#include <stdio.h>
#include <string.h>

/**
 * string_toupper - Convert string to uppercase
 * @a: string being converted
 *
 * Return: return string
 */
char *string_toupper(char *a)
{
	int i;
	int l;

	l = strlen(a);

	for (i = 0; i < l; i++)
	{
		if (a[i] > 90)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
