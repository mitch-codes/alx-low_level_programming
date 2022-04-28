#include <stdio.h>
#include <string.h>

/**
 * _atoi - convert string to integer
 * @s: string to be converted
 *
 * Return: integer converted from string
 */
int main(void)
//void print_array(int *a, int n)
{
	char s[] = "25";
	char *sc;
	sc = s;

	int l = strlen(s);

	int i;

	for (i = 0; i < l; i++)
	{
		if (*(sc + i) != '\0')
		{
			printf("%d, ", *(sc + i)-48);
			printf("\n");
		}
		else
		{
			printf("end");
		}
	}
	printf("\n");
}
