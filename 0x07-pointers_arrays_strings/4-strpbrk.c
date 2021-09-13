#include "main.h"

/**
 *_strpbrk - locates the first occurrence in a string
 *@s: string 1
 *@accept: string 2
 *Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}

			j++;
				}

		i++;
	}

	return ('\0');
}
