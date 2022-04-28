#include <stdio.h>
#include <string.h>

/**
 * leet - decode text
 * @a: string being encoded
 *
 * Return: return string
 */
char *leet(char *a)
{
	int i;
	int l;

	l = strlen(a);

	for (i = 0; i < l; i++)
	{
		if (a[i] == 'A' || a[i] == 'a')
		{
			a[i] = '4';
		}
		if (a[i] == 'e' || a[i] == 'E')
		{
			a[i] = '3';
		}
		if (a[i] == 'o' || a[i] == 'O')
		{
			a[i] = '0';
		}
		if (a[i] == 't' || a[i] == 'T')
		{
			a[i] = '7';
		}
		if (a[i] == 'l' || a[i] == 'L')
		{
			a[i] = '1';
		}
	}
	return (a);
}
