#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - alocate memory using malloc
 *
 * @size: the size of the array
 * @c: the first character of the array
 * Return: pointer to the memory allocated
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	str = malloc(sizeof(char) * size);
	if (str == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(str + i) = c;
	}
	return (str);
}
