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
	int i , j, rem;
	unsigned long int k;

	for (i = 0; n != 0; i++)
	{
		n = n >> 1;
	}

	for (j = 0; j < i; j++)
	{
		rem = y & 1;
		y = y >> 1;
		printf("%d", ~rem + 1);
	}
	printf("\n");
}
