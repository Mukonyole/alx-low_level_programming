#include "function_pointers.h"

/**
 * int_index - Searches for an integer by comparing values.
 * @array: An array.
 * @size: The size of elements.
 * @cmp: a pointer to the function to be used to compare values.
 * Return: Always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);

}
