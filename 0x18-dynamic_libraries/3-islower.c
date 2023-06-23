#include "main.h"

/**
 * _islower - Short description, single line
 * @c: To compare values
 * Return: Nil result.
 */
int _islower(int c)

{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
