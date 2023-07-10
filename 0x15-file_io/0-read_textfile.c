#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-  reads a text file and prints it to a standard output.
 * @filename: text file.
 * @letters: number of letters.
 * Return:  number of letters it could read and print.
 * if the file can not be opened, read or NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t a;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, b);
	free(buf);
	close(fd);
	return (a);/* number of bytes read.*/
}
