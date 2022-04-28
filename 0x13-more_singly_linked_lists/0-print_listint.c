#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - print items in a linked list
 *
 * @h: pointer to the first item in list
 * Return: number of items in list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int j = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		j++;
		h = h->next;
	}
	return (j);
}
