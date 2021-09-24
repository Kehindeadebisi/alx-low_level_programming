#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *@min: minimum
 *@max: maximum
 *Return: 0
 */

int *array_range(int min, int max)
{
	int *p;
	int i = 0, j = 0;

	if (min > max)
		return (NULL);

	j = max - min + 1;

	p = malloc(sizeof(int) * j);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		*p[i] = min;
		min++;
	}

	return (p);

}
