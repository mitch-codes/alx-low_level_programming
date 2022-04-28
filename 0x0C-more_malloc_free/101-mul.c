#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument arrays
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc > 2 && argc < 4)
	{
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
