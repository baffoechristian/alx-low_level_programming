#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string input
 * @c: character to find
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int k;

	for (k = 0; s[k] != '\0'; k++)
		if (s[k] == c)
			break;
	return (s[k] == c ? (s + k) : '\0');
}
