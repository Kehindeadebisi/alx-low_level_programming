#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *listint_len : counts length of integers
 *@h: header pointer
 *Return: 0
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++
			}

	return (count);
}
