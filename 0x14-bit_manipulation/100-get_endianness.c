#include "main.h"

/**
 * get_endianness - it checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */


int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
