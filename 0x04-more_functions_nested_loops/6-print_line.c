#include <stdio.h>

/**
 * print_line - print lines in form of underscore
 * @n: the length of the line
 *
 * Return: always 0 (Success)
 */
/*int main(void)*/
void print_line(int n)
{
	int j;

	for (j = 1; j <= n; j++)
	{
		if (n > 0)
		{
			putchar('_');
		}
	}
	putchar('\n');
}

