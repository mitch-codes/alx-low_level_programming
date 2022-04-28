#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatanate or append a string to another
 * @dest: String to be appended to
 * @src: string to be appended
 *
 * Return: appended string
 */
char *_strcat(char *dest, char *src)
{
	/*char s[] = "hello";*/
	/*char d[20] = "good";*/
	/*char *src;*/
	/*src = s;*/
	/*char *dest;*/
	/*dest = d;*/
	int l1;
	int l2;
	int i;

	l1 = strlen(src);
	l2 = strlen(dest);

	for (i = 0; i < l1; i++)
	{
		dest[l2 + i] = src[i];
	}

	/*strcat(dest, src);*/
	/*printf("length 1: %d ", l1);*/
	/*printf("length 2: %d\n", l2);*/
	/*printf("%s \n", d);*/
	return (dest);
}
