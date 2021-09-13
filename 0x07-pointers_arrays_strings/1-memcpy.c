#include "main.h"

/**
 *_memcpy - copies n bytes from one memory area to another
 *@dest: desination
 *@src: source
 *@n: bytes
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
