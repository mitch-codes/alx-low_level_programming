#include <stdio.h>

/**
 * _puts - prints an array of strings
 * @str: pointer to the array to be printed
 *
 * Return: void no return
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < 500; i++)
	{
		if (*(str + i) != '\0')
		{
			printf("%c", *(str + i));
			continue;
		}
		else
		{
			printf("\n");
			break;
		}
	}
}
