#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: 0
 */
int main(void)
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
