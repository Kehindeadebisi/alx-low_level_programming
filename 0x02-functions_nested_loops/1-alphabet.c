#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - prints the alphabet, in lowercase, followed by a newline
 *Return: 0
 */
int print_alphabet(void)
{
	int x = 'A';
	while (x <= 'Z') {
		x = tolower(x);
		_putchar(x);
		x++;

	}

	_putchar('\n');
	return (0);
}
