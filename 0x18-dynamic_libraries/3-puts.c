#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _puts - prints strings.
 * @s: function parameter.
 * Return: 0
 */

void _puts(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
		putchar(s[i]);
	putchar('\n');



}
