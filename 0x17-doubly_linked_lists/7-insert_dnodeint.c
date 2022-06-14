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
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	while (i < idx)
	{
		place = place->next;
		i++
	}
	place->next->prev = temp;
	temp->next = place->next;
	place->next = temp;
	temp->prev = place;
	return (temp);
}


