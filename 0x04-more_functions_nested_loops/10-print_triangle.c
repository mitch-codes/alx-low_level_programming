#include <stdio.h>

/**
 * print_triangle - prints a triangle using #
 * @size: the size of the triangle
 *
 * Return: always 0 (Success)
 */
void print_triangle(int size)
{
	int j;
	int i;
	int k;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = size; i > j; i--)
			{
				putchar(' ');
			}
			for (k = 1; k <= j; k++)
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

