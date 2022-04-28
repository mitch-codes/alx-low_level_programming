#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compare two strings
 * @s1: String to be compared to
 * @s2: string being compared
 *
 * Return: value of s1 greater or less than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int comp;

	for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			if (*(s1 + i) > *(s2 + i))
			{
				comp = *(s1 + i) - *(s2 + i);
			}
			else
			{
				comp = *(s1 + i) - *(s2 + i);
			}
			break;
		}
	}

	if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
	{
		comp = 0;
	}
	return (comp);
}
