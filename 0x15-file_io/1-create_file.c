#include "main.h"

/**
 * create_file - Create a file object
 *
 * @filename: name of file
 * @text_content: text contetnt
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, wd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		/* i - get length */
		for (i = 0; text_content[i] != '\0'; i++)
			;
		wd = write(fd, text_content, i);
		if (wd == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
