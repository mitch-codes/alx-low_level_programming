#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatanate or append a string to another
 * @dest: String to be appended to
 * @src: string to be appended
 * @n: number of charaters to be appended
 *
 * Return: appended string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l2;
	int i;

	l2 = strlen(dest);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (src[i] != '\0')
			{
				dest[l2 + i] = src[i];
			}
			else
			{
				break;
			}
		}
	}

	return (dest);
}
