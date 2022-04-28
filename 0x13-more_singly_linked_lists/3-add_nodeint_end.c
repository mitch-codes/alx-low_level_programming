#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - add node to end of linked list
 *
 * @head: pointer to the first item in list
 * @n: integer to add to linked list
 * Return: pointer to linke list node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *newn = *head;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (newn->next != NULL)
	{
		newn = newn->next;
	}
	newn->next = ptr;
	return (ptr);
}
