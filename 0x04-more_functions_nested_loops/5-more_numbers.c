#include <stdio.h>

/**
 * more_numbers - print numbers 0 to 14 ten times
 *
 * Return: always 0 (Success)
 */
/*int main(void)*/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				putchar(i + '0');
			}
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
			}
			if (i == 14)
			{
				printf("\n");
			}
		}
	}
}

