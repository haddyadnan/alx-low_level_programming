#include "main.h"

/**
 * append_text_to_file - Append text to end of file
 *
 * @filename: name of file
 * @text_content: text content
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, appd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] == '\0'; i++)
			;
		appd = write(fd, text_content, i);
		if (appd == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
