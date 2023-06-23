#include "main.h"

/**
 *_strncpy - copy string.
 *@dest: string one.
 *@src: string two
 *@n: n bytes from src.
 *Return: Nil
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, k = 0;

	while (n > k)
	{
		if (src[k] == '\0')
		{
			for (; k < n; k++)
			{
				dest[a] = '\0';
				a++;
			}
		}
		else
		{
			dest[a] = src[k];
			k++;
			a++;
		}
	}

	return (dest);
}
