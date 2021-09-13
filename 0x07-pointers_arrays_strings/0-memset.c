#include "main.h"

/**
 *_memset - fills memory with constant
 *@s: pointer to memory area to be filled
 *@b: constant
 *@n: bytes of the memory area
 *Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
		if (*(s + i) = '\0')
			break;
	}

	return (s);
}
