#include "main.h"

/**
 *_strcat - concenates string
 *@dest: destination
 *@src: source
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int l = 0, i;

	while(dest[l])
	{
		l++;
	}

	for(i = 0; src[i]; i++)
	{
		dest[l] = src[i];
		l++;
	}

	dest[l] = '\0';
	return (dest);
}
