#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - free head of a list
 *
 * @head: pointer to the first item in list
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *newn = *head;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = newn->n;
	*head = newn->next;
	free(newn);
	return (data);
}
