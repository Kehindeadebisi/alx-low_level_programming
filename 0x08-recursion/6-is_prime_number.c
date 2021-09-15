#include "main.h"
#include <stdio.h>

/**
 *is_prime_number - prints prime number
 *@n: integer
 *Return: 1 if primme number
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 *check_prime - checks if number is prime
 *@n: number
 *@i: iteration
 *Return: 1 if prime
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);
}
