#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_binary - print binary from int
 *
 * @n: the decimal to be converted
 */
void print_binary(unsigned long int n)
{
	int y = (int) n;
	int i, j, rem;
	int k = (int) n;
	int l = (int) n;

	for (i = 0; n != 0; i++)
	{
		n = n >> 1;
	}

	for (j = i - 1; j >= 0; j--)
	{
		k = y >> j;
		rem = k & 1;
		putchar(rem + 48);
	}
	if (l == 0)
	{
		putchar('0');
	}
}
