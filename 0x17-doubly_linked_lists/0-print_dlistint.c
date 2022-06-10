#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"lists.h"

/**
 * print_dlistint - print the values of adoubly linked list
 *
 * @h: the head pointer
 * Return: the number of elements in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}


