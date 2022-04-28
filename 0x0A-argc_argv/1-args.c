#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: number of command line arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
