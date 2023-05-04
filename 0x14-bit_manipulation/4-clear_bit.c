#include "main.h"

/**
 * clear_bit - it sets the value of a bit to 0 at a given index.
 * @index: an index of a bit.
 * @n: pointer to a number to be changed.
 * Return: 1 if it worked, or -1 if an error occurred.
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
