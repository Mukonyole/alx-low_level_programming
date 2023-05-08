#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - it reads a text file
 * and prints it to the POSIX standard output.
 * @letters: the number of letters.
 * @filename: a text file.
 * Return: the actual number of letters it could read and print.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t t;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}
