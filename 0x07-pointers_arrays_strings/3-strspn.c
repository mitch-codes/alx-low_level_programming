#include <stdio.h>
#include <string.h>

/**
 * _strspn - find characters common in both arrays without repetion
 *
 * @s: array being compared
 * @accept: characters being searched for
 * Return: number of characters common
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int result = 0;
	unsigned int l = strlen(s);
	char e;

	for (i = 0; i < l; i++)
	{
		if (s[i] != '\0')
		{
			for (j = 0; j <= l; j++)
			{
				if (s[i] == accept[j])
				{
					if (accept[j] != '\0')
					{
					if (e != accept[j])
					{
					result++;
					}
					e = accept[j];
					}
				}
			}
		}
	}

	return (result);
}
