#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to the duplicated string.
 * @str: char.
 * Return: 0 (Success).
 */

char *_strdup(char *str)
{
	char *jjj;
	int i, k = 0;

	if (str == NULL)
	return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;
	jjj = malloc(sizeof(char) * (i + 1));
	if (jjj == NULL)
	return (NULL);
	for (k = 0; str[k]; k++)
		jjj[k] = str[k];
	return (jjj);
}

