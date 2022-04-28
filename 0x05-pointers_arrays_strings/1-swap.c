#include <stdio.h>

/**
 * swap_int - swap two integers using pointers
 * @a: first int to be swaped
 * @b: second int to be swaped
 *
 * Return: no return void
 */
void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
