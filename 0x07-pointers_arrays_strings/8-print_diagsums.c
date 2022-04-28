#include <stdio.h>
#include <math.h>

/**
 * print_diagsums - add diagonl arrays
 *
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int length = 0;
	int length2 = sqrt(size + 1);
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + *(a + length);
		length = length + size + 1;
	}
	for (j = size; j > 0; j--)
	{
		sum2 = sum2 + *(a + length2);
		length2 = length2 + sqrt(size + 1);
	}
	printf("%d, %d", sum, sum2);
}
