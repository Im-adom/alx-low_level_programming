#include "main.h"
/**
 * create_file - creates a file
 * @filename: a pointer to the name of the
 * file to create.
 * @text_content: a pointer to the string to write
 * to the file.
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, s_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
	for (s_len = 0; text_content[s_len];)
		s_len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(fd, text_content, s_len);
	if (fd == -1 || i == -1)
		return (-1);
	close(fd);

	return (1);
}
