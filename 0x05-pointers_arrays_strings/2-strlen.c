#include <stdio.h>

/**
 * _strlen - calculate the length of a string
 * @c: pointer to the array
 *
 * Return: legnth of the string
 */
int _strlen(char *c)
{
	int i;

	for (i = 0; i < 500; i++)
	{
		if (*(c + i) != '\0')
		{
			continue;
		}
		else
		{
			break;
		}
	}
	return (i);
}
