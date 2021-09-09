#include "main.h"
/**
 *reverse_array - compares two strings
~ * @a: integer array
 * @n: number of elements in the array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp[1000];
	int j;
	int k = n - 1;

	for (i = 0; i < n; i++)
	{
		tmp[i] = a[i];
	}
	while (j < n)
	{
		*(a + j) = *(tmp + k);
		j++;
		k--;
	}
}
