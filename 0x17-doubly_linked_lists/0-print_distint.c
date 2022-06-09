#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include"lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (0);
	}
	temp = h;
	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		i++;
		printf("%d", temp->n);
		temp = temp->next;
	}
	return i;
}


