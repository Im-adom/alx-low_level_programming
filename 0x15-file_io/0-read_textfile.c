#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - This function  reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the text file to be read.
 * @letters: the number of letters to read and print.
 * Return: pri_byte,actual number of letters to be read and printed
 * or 0 when function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t st_byte;
	ssize_t pri_byte;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	st_byte = read(fd, buffer, letters);
	pri_byte = write(STDOUT_FILENO, buffer, st_byte);

	free(buffer);
	close(fd);
	return (pri_byte);
}
