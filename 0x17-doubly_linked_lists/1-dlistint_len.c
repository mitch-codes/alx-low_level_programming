#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"lists.h"

/**
 * dlistint_len - print number of elements of linked list
 *
 * @h: the head pointer
 * Return: the number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}


