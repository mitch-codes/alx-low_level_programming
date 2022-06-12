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


