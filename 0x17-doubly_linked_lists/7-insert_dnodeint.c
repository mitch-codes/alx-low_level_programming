#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"lists.h"

/**
 * insert_dnodeint_at_index - insert node at particular index
 *
 * @h: the head pointer
 * @idx: the index at which you want to inser the node
 * @n: the data of the new node
 * Return: the node being created and inserted
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;

	dlistint_t *place = *h;
	dlistint_t *new;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (*h == NULL)
	{
		if (idx > 0)
		{
			return (NULL);
		}
		*h = temp;
		return (temp);
	}

	while (place != NULL)
	{
		if (i == idx - 1)
		{
			new = place->next;
			place->next = temp;
			temp->prev = place;
			temp->next = new;
			new->prev = temp;
			return (temp);
		}
		place = place->next;
		i++;
	}
	return (NULL);
}


