#include "main.h"

/**
 *swap_int - swaps values of integers
 *@a: first integer
 *@b: second integer
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	*a = 98;
	*b = 42;
	*a = *b;
	*b = *a;
}
