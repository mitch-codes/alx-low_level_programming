#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Copy src to dest number of characters
 * @dest: String to be appended to
 * @src: string to be appended
 * @n: number of characters
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			src[i] = dest[i];
		}
	}
	return (dest);
}
