#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"lists.h"

/**
 * get_dnodeint_at_index - get the node at a particular index
 *
 * @head: the head pointer
 * @index: the index of the node
 * Return: the node at that particular index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}


