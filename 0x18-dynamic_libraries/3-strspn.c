#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search for substring
 * @accept: characters that prefix substring must include
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, j, a_len = 0, len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	for (k = 0; s[k] != '\0'; k++)
		for (j = 0; j < a_len; j++)
			if (s[k] == accept[j])
				len++, j = a_len;
			else
				if (j == a_len - 1)
					goto exit;
exit: return (len);
}
