#include <stdio.h>

/**
 * print_square - prints a square
 * @size: the length of the square
 *
 * Return: always 0 (Success)
 */
void print_square(int size)
{
	int j;
	int i;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 1; i <= size; i++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}

