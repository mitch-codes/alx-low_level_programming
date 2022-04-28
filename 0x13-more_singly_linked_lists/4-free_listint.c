#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - free or delete a list
 *
 * @head: pointer to the first item in list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	while (head != NULL)
	{
		last = head->next;
		free(head);
		head = last;
	}
}
