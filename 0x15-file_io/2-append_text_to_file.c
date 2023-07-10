#include "main.h"

/**
 * append_text_to_file - it appends text at the end of a file.
 * @filename: file name pointer.
 * @text_content: string to be added at the end of file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);/* function argument is NULL.*/
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;/*Determines length of a string.*/
	}
	a = open(filename, O_WRONLY | O_APPEND);/* open file in append mode.*/
	b = write(a, text_content, len);
	if (a == -1 || b == -1)
		return (-1);/*if fd or number of bytes written is -1.*/
	close(a);/*closes fd.*/
	return (1);/* string succesfully appended to the file.*/
}
