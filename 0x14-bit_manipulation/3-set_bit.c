#include "main.h"

/**
 * set_bit - makes a bit at a certain index 1
 * @n: pointer to the desired number
 * @index: bits index that has to be set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
