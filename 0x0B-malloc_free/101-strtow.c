#include <stdlib.h>
#include "main.h"

/**
 * count_word - CountS the number of words in a string.
 * @s: Evaluation string.
 * Return: The number of words.
 */
int count_word(char *s)
{
	int flag, j, k;

	flag = 0;
	k = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			k++;
		}
	}

	return (k);
}
/**
 * **strtow - It splits a string into words.
 * @str: The string to split.
 * Return: pointer to an array of strings (Success).
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, l = 0, len = 0, words, j = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[l] = tmp - j;
				l++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}

	matrix[l] = NULL;

	return (matrix);
}

