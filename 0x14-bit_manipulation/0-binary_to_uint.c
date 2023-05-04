#include "main.h"

/**
 * binary_to_uint - it onverts a binary number to an unsigned int.
 * @b: the string.
 * Return: the converted number, or 0 if,
 * there is one or more chars in the string b that is not 0 or 1,
 * b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[a] - '0');
	}
	return (dec_val);
}
