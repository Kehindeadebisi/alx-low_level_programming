#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - finds the squareroot of an integer
 *@n: integer
 *Return: squareroot
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
		return (get_sqrt(n, 1));
	else
		return (-1);
}

/**
 * get_sqrt - Get the square root recursively
 * @n: Number to get the square root
 * @sqr: Square root of the number
 *
 * Return: Sqaure root of a number.
 */
int get_sqrt(int n, int sqr)
{
	if (sqr * sqr == n)
		return (sqr);
	else if (sqr >= n)
		return (-1);

	return (get_sqrt(n, sqr + 1));
}
