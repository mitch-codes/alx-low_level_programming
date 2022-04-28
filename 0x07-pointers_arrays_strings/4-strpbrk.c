#include <stdio.h>
#include <string.h>

/**
 * _strchr - find a string in a rray and print from there
 *
 * @s: array being searched through
 * @c: character being looked for
 * Return: the final array
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	while(s[i] != '\0')
	{
		while(accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count = i;
				break;
			}
		}
	}
}
