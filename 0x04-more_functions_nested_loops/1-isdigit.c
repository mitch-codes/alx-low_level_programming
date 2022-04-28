#include <stdio.h>
#include "main.h"

/**
 * _isdigit - find out if a character is a digit
 * @c: parameter being tested
 *
 * Return: always 0 (Success)
 */
/*int main(void)*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

