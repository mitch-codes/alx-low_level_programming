#include <stdio.h>

/**
 * puts_half - prints half a string
 * @str: pointer to the array to be printed
 *
 * Return: void no return
 */
void puts_half(char *str)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 500; i++)
	{
		if (*(str + i) != '\0')
		{
			continue;
		}
		else
		{
			break;
		}
	}
	k = i / 2;
	if ((i % 2) != 0)
	{
		k = k + 1;
	}
	for (j = k; j <= (i - 1); j++)
	{
		printf("%c", *(str + j));
	}
	printf("\n");
}
