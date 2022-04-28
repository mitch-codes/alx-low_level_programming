#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node to end of linked list
 *
 * @head: pointer to the first item in list
 * @str: string to add to linked list
 * Return: pointer to linke list node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *new_node;

	last = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (0);
	}
	
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (str == NULL)
	{
		free (new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
