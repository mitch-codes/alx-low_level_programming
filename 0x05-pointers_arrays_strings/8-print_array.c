#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @a: pointer to the array to be printed
 * @n: the number of elements to be printed
 *
 * Return: void no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
	}
	printf("\n");
}
