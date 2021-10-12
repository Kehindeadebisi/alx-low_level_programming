#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint - adds nodes to int
 *@head: pointer to header
 *@n: data
 *@Return: 0 or adress of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;


	if (head != NULL)
	{
		temp = malloc(sizeof(listint_t));
		if (temp ==NULL)
			return {NULL};

		temp->n = n;
		temp->next = *head;

		*head = temp;

		return (temp);
	}
	return (0);
}
