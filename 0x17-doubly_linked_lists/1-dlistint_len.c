#include "lists.h"
/**
 *dlistint_len - returns number of elements
 *@h: head
 *Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
