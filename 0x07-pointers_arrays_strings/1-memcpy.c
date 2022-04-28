#include <stdio.h>

/**
 * _memcpy - copy from one memory location to another
 *
 * @src: the array being copied
 * @dest: array being copied to
 * @n: number of bytes to becopied
 * Return: the final array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
