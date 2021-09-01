#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 *@c: alphabet to be checked
 *Return: 1 if alphabet, 0 if not
 */
int _isalpha(int c)
{
	char c;

	if (isalpha(c))
		return (1);
	else
		return (0);
}
