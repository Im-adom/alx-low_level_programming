#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: a pointer to the name of the file.
 * @text_content: a string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, j, s_len = 0;

	if (filename == NULL)
		return (-1);
	if  (text_content != NULL)
	{
		for (s_len = 0; text_content[s_len];)
			s_len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	j = write(fd, text_content, s_len);
	if (fd == -1 || j == -1)
		return (-1);
	close(fd);
	return (1);
}
