#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size and assign char c.
 * @size: The size of an array.
 * @c:The char to assign.
 * Description: creat array of size size and assign char c
 * Return: pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)

{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
