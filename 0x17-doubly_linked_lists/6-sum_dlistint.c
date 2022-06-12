#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"lists.h"

/**
 * sum_dlistint - get the sum of all data in the nodes
 *
 * @head: the head pointer
 * Return: the sum of the node data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}


