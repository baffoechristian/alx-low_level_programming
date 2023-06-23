#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: input pointer to string destination
 * @src: input pointer to source string
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		*(dest + k) = *(src + k);
		k++;
	}
	return (dest);
}
