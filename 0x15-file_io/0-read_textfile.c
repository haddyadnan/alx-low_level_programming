#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Read textfile and print
 *
 * @filename: name of file
 * @letters: number of letters
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_c, write_c;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	read_c = read(fd, buff, letters);
	if (read_c == -1)
	{
		free(buff);
		return (0);
	}
	write_c = write(STDOUT_FILENO, buff, read_c);
	if (write_c == -1 || read_c != write_c)
	{
		return (0);
	}
	close(fd);
	return (write_c);
}
