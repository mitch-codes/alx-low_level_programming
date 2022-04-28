#include <stdio.h>

/**
 * puts2 - prints an array of strings but skips a letter
 * @str: pointer to the array to be printed
 *
 * Return: void no return
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < 500; i++)
	{
		if (*(str + i) != '\0')
		{
			if (i % 2 == 0)
			{
				printf("%c", *(str + i));
			}
			continue;
		}
		else
		{
			printf("\n");
			break;
		}
	}
}
