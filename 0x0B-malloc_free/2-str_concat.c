#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: The first input to concat.
 * @s2: The second input to concat.
 * Return: concat of s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ji;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	i = ji = 0;
	while (s1[i] != '\0')
	i++;
	while (s2[ji] != '\0')
	ji++;
	conct = malloc(sizeof(char) * (i + ji + 1));
	if (conct == NULL)
	return (NULL);
	i = ji = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[ji] != '\0')
	{
		conct[i] = s2[ji];
		i++, ji++;
	}
	conct[i] = '\0';
	return (conct);
}
