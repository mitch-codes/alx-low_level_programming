#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0 (Success)
*/
/*int main(void)*/
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
