#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function that allocates 1024 bytes to a  buffer.
 * @file: Name of file buffer.
 * Return: a pointer to a new buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - it closes the file descriptors.
 * @fd: file descriptor.
 */

void close_file(int fd)
{
	int a;

	a = close(fd);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - it copies the content of a file to another file.
 * @argv: pointer arrays to arguments.
 * @argc: number of arguments.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int from, to, b, c;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	b = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		c = write(to, buffer, b);
		if (to == -1 || c == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		b = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (b > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
