#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get a specific node
 *
 * @head: pointer to the first item in list
 * @index: index we are looking for
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	for (j = 0; j < index; j++)
	{
		head = head->next;
	}
	if (head == NULL)
	{
	return;
	}
	return (head);
}
