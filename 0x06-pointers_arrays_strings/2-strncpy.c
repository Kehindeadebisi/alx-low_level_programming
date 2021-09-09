#include "main.h"

/**
 *_strncpy - copies string
 *@dest: destination
 *@src: source to be copied from
 *@n: number of characters to be copied
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])

	{
		j++;
	}
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++
			}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
