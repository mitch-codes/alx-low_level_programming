#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strspn - find characters common in both arrays without repetion
 *
 * @s: array being compared
 * @accept: characters being searched for
 * Return: number of characters common
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, l;
	unsigned int k = 0;
	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);
	unsigned int len3 = len1 + len2;
	char *temp;

	temp = malloc(len3 + 1);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			int match = 0;

			if (s[i] == accept[j])
			{
				if (s[i] != ' ')
				{
					for (l = 0; l < len3; l++)
					{
					if (temp[l] == s[i])
					{
						match = 1;
					}
					}
					if (match < 1)
					{
						temp[k] = s[i];
						k++;
					}
				}
			}
		}
	}
	return (k);
}
