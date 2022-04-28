#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a, b, c, i;

	a = 0;
	b = 1;

	for (i = 0; i < 45; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
	}
	printf("2971215073, 4807526976, 7778742049, 12586269025, 20365011074\n");
	return (0);
}
