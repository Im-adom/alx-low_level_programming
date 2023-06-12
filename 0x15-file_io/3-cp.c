#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - This allocates 1024 bytes for a buffer.
 * @file: the file buffer is keeping stings for.
 * Return: a pointer to the new buffer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * close_file - this closes file descriptors.
 * @fd: The file descriptor to close
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main- this copies the content of one file to another.
 * @argc: the number of arguments given by program.
 * @argv: array of pointers to the given arguments
 * Return: 0
 * if argc is incorrect, exit code 97.
 * if file_from and file_to does not exist, exit code 98 and 99 respectively.
 * if file_from or file_to cannot be closed, exit code
 * 100.
 */
int main(int argc, char *argv[])
{
	int from, to, re;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		re = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);
	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
