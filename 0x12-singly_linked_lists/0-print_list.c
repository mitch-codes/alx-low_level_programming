#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - print items in a linked list
 *
 * @h: pointer to the first item in list
 * Return: number of items in list
 */
size_t print_list(const list_t *h)
{
	unsigned int j = 0;
	unsigned int i;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] ", h->len);
			for (i = 0; h->str[i] != '\0'; i++)
			{
				printf("%c", h->str[i]);
			}
			printf("\n");
		}
		else
		{
			printf("[0] (nil)\n");
		}
		j++;
		h = h->next;
	}
	return (j);
}
