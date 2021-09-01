#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - prints lowercase alphabets 10 times
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
	int i = 0, j;


	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
	}
		_putchar('\n');
		i++
			}
	return (0);
}
