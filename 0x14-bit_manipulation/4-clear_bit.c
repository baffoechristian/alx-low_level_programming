#include "main.h"

/**
 * clear_bit - sets a particular bits value to 0
 * @n: pointer to the desired number
 * @index: bits index that has to be set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
