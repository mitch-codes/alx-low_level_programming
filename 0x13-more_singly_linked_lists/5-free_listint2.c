#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - free or delete a list
 *
 * @head: pointer to the first item in list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *last;
	listint_t *newn = *head;

	while (newn != NULL)
	{
		last = newn->next;
		free(newn);
		newn = last;
	}
	*head = NULL;
}
