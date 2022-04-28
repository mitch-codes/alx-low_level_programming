#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet a to z
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
