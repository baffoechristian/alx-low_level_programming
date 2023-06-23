#include "main.h"

/**
 *_strcat - concatinate two strings.
 *@dest: string 1
 *@src: string 2
 *Return: Nil
 */

char *_strcat(char *dest, char *src)
{
	int k = 0, b = 0;

	while (dest[k] != '\0')
		k++;

	while (src[b] != '\0')
	{
		dest[k] = src[b];
		k++;
		b++;
	}

	dest[k] = '\0';

	return (dest);
}
