#include "lists.h"
#include <stdio.h>

/**
 *list_len - prints number of elements
 *@h: pointer to head
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
			}
	return (n);
}
