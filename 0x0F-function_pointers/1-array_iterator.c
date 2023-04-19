#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - It prints every array element on a new line.
 * @array: an array.
 * @size: Elements size to print.
 * @action: A pointer to print.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
