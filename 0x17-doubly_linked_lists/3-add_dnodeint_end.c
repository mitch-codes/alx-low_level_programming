#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"lists.h"

/**
 * add_dnodeint_end - add node to end of double linked list
 *
 * @head: the head pointer
 * @n: the value to be added
 * Return: the number of elements in the linked list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *entry = *head;

	if (temp == NULL)
	{
		return (0);
	}
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	if (entry == NULL)
	{
		*head = temp;
	}
	else
	{
		while (entry->next != NULL)
		{
			entry = entry->next;
		}
		entry->next = temp;
		temp->prev = entry;
	}
	return (temp);
}


