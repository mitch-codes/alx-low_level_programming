#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"lists.h"

/**
 * add_dnodeint - print number of elements of linked list
 *
 * @head: the head pointer
 * @n: the value to be added
 * Return: the number of elements in the linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (0);
	}
	temp->prev = NULL;
	temp->n = n;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		(*head)->prev = temp;
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}


