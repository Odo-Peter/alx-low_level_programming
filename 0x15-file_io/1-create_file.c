#include "main.h"

/**
 * create_file - creates a file
 * @filename: the filename.
 * @text_content: the content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nchars;
	int writes;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nchars = 0; text_content[nchars]; nchars++)
		;

	writes = write(fd, text_content, nchars);

	if (writes == -1)
		return (-1);

	close(fd);

	return (1);
}
