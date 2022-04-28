#include <stdio.h>

/**
 * print_most_numbers - print numbers 0 to 9 except 2 and 4
 *
 * Return: always 0 (Success)
 */
/*int main(void)*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
}

