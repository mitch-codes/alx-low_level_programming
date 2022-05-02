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
	int i, k, j, *stomp;

	for (i = 0; n != 0; i++)
	{
		n = n / 2;
	}

	stomp = malloc(sizeof(char) * i);

	for (j = i - 1; y != 0; j--)
	{
		stomp[j] = y % 2;
		y = y / 2;
	}
	for (k = 0; k < i; k++)
	{
		printf("%d", stomp[k]);
	}
	free (stomp);
}
