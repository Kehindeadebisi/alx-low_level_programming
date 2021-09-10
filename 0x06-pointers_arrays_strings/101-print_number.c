#include "main.h"

/**
  * print_number - prints integers with putchar
  * @n: Number to prints
  *
  * Return: 0
  */
void print_number(int n)
{
	unsigned int firstnum = 0;

	if (num % 10 < 0)
	{
		_putchar('-');
		firstnum = num * -1;
	}
	else
		firstnum = num;

	if (firstnum < 10)
		_putchar((firstnum % 10) + '0');
	else
	{
		print_number(firstnum / 10);
		_putchar((firstnum % 10) + '0');
	}
}
