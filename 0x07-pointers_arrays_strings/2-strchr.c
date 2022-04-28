#include <stdio.h>
#include <string.h>

/**
 * _strchr - find a string in a rray and print from there
 *
 * @s: array being searched through
 * @c: character being looked for
 * Return: the final array
 */
char *_strchr(char *s, char c)
{
	int i;
	int l = strlen(s);
	/*char result;*/

	for (i = 0; i <= l ; i++)
	{
		if (*(s + i) == c)
		{
			break;
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
