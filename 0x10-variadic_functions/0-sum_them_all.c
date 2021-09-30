#include "variadic_functions.h"
#include <stdio.h>

/**
 *sum_them_all - sum
 *@n: variadic input
 *Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned imt i;
	va_list list;

	va_start(list, n);
	for(i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
