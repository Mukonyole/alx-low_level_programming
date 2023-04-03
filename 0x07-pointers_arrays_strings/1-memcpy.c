#include "main.h"
/**
 *_memcpy - a function that copies memory area.
 *@dest: The memory where is stored.
 *@src: The memory where is copied.
 *@n: The number of bytes.
 *
 *Return: A copied memory with n bytes changed.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

