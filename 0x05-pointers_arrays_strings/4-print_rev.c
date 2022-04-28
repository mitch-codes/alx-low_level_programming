#include <stdio.h>

/**
 * print_rev - prints an array of strings in reverse
 * @s: pointer to the array to be printed
 *
 * Return: void no return
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; i < 500; i++)
	{
		if (*(s + i) != '\0')
		{
			continue;
		}
		else
		{
			break;
		}
	}
	i = i - 1;
	for (j = i; j >= 0; j--)
	{
		printf("%c", *(s + j));
	}
	printf("\n");
}
