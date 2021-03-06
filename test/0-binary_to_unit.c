#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - convert binary to decimal
 *
 * @b: string of number being converted
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, result;
	int sum = 0;
	int length = strlen(b);
	int temp = 1;

	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (j = length - 1; j >= 0; j--)
	{
		char ch = b[j] - 48;

		if (j > length)
		{
			sum = sum + ch * 1;
		}
		else
		{
			temp = temp * 2;
			sum = sum + (ch * temp);
		}
	}
	sum = sum / 2;
	result = (unsigned int) sum;
	return (result);
}
