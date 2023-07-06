#include "main.h"

/**
 * set_bit - it sets the value of a bit to 1 at a given index.
 * @n: the number to change.
 * @index: the index.
 * Return: 1 on success and -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
