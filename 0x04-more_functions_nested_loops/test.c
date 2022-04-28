#include <stdio.h>

/**
 * print_square - prints a square
 * @size: the length of the square
 *
 * Return: always 0 (Success)
 */
int main(void)
/*void print_square(int size)*/
{
	int j;
	int i;
	int k;
	int size = 1;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = size; i >= j; i--)
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

