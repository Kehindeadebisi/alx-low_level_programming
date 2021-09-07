#include "main.h"
#include <stdio.h>

/**
 *rev_string - reverses a string
 *@s: string
 */

void rev_string(char *s)
{
	int l, i, t;

	l = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > l)
	{
		t = s[i];
		s[i--] = s[l];
		s[l++] = t;
	}
}
