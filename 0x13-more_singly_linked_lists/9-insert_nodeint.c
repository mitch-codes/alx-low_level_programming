#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - add node at index
 *
 * @head: pointer to the first item in list
 * @idx: index to insert node
 * @n: data to be entered
 * Return: sum of data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *last;
	listint_t *newn;
	listint_t *ptr;

	last = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (0);
	}

	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	for (j = 0; j < idx; j++)
	{
		last = last->next;
	}
	newn = last->next;
	last->next = ptr;
	ptr->next = newn;
	return (ptr);
}
