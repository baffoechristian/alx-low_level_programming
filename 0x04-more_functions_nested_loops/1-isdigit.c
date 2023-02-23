#include "main.h"

/**
 * _isdigit - This function checks for digits between 0 to 9
 * @c: digit
 * Return: returns 1 if digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
