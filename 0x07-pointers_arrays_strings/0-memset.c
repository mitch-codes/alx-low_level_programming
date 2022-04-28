#include <stdio.h>

/**
 * _memset - assign characters to a particular memery location
 *
 * @s: the memory we want to fill
 * @b: the character we want to fill into the memory
 * @n: number of bytes to be filled
 * Return: the final array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
