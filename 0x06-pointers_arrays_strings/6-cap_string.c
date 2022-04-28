#include <stdio.h>
#include <string.h>

/**
 * cap_string - Capitalize words
 * @a: string being capitalized
 *
 * Return: return string
 */
char *cap_string(char *a)
{
	int i;
	int l;

	l = strlen(a);

	for (i = 0; i < l; i++)
	{
		if (i == 0 || a[i - 1] == ' ' || a[i - 1] == '\n'
		|| a[i - 1] == '\t' || a[i - 1] == ',' || a[i - 1] == ';'
		|| a[i - 1] == '.' || a[i - 1] == '!' || a[i - 1] == '?'
		|| a[i - 1] == '\"' || a[i - 1] == '(' || a[i - 1] == ')'
		|| a[i - 1] == '{' || a[i - 1] == '}')
		{
			if (a[i] >= 97 && a[i] <= 122)
			{
			a[i] = a[i] - 32;
			}
		}
	}
	return (a);
}
