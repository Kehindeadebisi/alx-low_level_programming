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
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (n < j)
		k = i + n;

	if (n >= j)
		k = i + j;

	ptr = malloc(sizeof(char) * k + 1);
	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (l < k)
	{
		if (l <= i)
			ptr[l] = s1[l];
		if (l <= i)
		{
			ptr[l] = s2[j];
			j++;
		}
		l++;
	}
	ptr[l] = '\0';
	return (ptr);
}
