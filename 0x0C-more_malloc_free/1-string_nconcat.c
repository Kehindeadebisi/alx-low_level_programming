#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenates strings
 *@s1: destination
 *@s2: source
 *@n: bytes to be added
 *Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}

	while (s2[j])
	{
		j++;
	}

	if (n < j)
		k = i + n + 1;

	if (n >= j)
		k = i + j + 1;

	ptr = malloc(sizeof(char) * k);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
