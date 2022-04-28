#include <stdio.h>

/**
 * print_diagonal - print diagonal line
 * @n: the length of the diagonal line
 *
 * Return: always 0 (Success)
 */
void print_diagonal(int n)
{
	int j;
	int i;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 1; i <= j; i++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}

