#include "main.h"

/**
 * _memset - fills string with constant byte
 * @s: input pointer to string
 * @b: constant char
 * @n: number of bytes
 * Return: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		s[k] = b;
		k++;
	}
	return (s);
}
