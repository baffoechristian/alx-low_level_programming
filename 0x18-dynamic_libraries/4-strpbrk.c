#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: input string to search for matching char
 * @accept: characters that could be matched
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int k, b;

	for (k = 0; s[k] != '\0'; k++)
		for (b = 0; accept[b] != '\0'; b++)
			if (s[k] == accept[b])
				goto exit;
exit: return (s[k] != '\0' ? s + k : '\0');
}
