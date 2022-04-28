#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - return number of ellements
 *
 * @h: pointer to the first item in list
 * Return: number of items in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
