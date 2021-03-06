#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"lists.h"

/**
 * free_dlistint - frees up memory allocated for nodes of the list
 *
 * @head: the head pointer
 * Return: the number of elements in the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}


