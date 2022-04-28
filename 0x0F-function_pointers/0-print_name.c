#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_name - print text using function pointer
 *
 * @name: name to be printed
 * @f: function to be printed
 * Return: character srtring
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
