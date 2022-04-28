#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copy string to buffer
 * @dest: buffer to be copied into
 * @src: string to be copied
 *
 * Return: void no return
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l;

	l = strlen(src);
	i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + l) = '\0';
	return (dest);
}
