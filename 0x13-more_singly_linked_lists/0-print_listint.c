#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_listint - prints list
 *@h: pointer to head
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (*h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
