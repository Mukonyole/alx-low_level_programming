#include <stdlib.h>
#include "main.h"

/**
 * *_memset - it fills memory with a constant byte.
 * @s: The memory area to be filled.
 * @k: The char to copy.
 * @n: The number of times to copy k.
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char k, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = k;
	}

	return (s);
}

/**
 * *_calloc - it allocates memory for an array.
 * @nmemb: The number of elements in array.
 * @size: The size of each and every element.
 * Return: The pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
