#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: 0
 */
int print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
	return (0);
}
