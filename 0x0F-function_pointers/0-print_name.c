#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - it printsa name by using pointer functions
 * @name: The string.
 * @f: The pointer.
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
