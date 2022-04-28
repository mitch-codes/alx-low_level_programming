#include <stdio.h>

/**
 * jack_bauer - prints 24 hours of the day
 *
 * Return: is void
*/
/*int main(void)*/
void jack_bauer(void)
{
	int i;
	int hours;
	int min;

	for (i = 0; i <= 1439; i++)
	{
		hours = i / 60;
		min = i - (60 * hours);
		if (hours < 10)
		{
			printf("0%d:", hours);
		}
		else
		{
			printf("%d:", hours);
		}
		if (min < 10)
		{
			printf("0%d", min);
		}
		else
		{
			printf("%d", min);
		}
		printf("\n");
	}
}
