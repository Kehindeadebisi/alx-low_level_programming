#include "main.h"

/**
 *_strspn - returns number of bytes in initial segment
 *@s: initial segment
 *@accept: bytes to be compared with
 *Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, l = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
	{
		if (accept[i] == s[j])
		{
			l++;
		}

		j++;
	}

		i++;
	}

	return (l);
}
