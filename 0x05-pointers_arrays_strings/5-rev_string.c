#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints an array of strings in reverse
 * @s: pointer to the array to be printed
 *
 * Return: void no return
 */
void rev_string(char *s)
{
	int i;
	int l;
	char ch;

	l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
}
