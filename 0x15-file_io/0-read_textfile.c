#include "holberton.h"
/**
 * read_textfile - this function read text on someone file
 * @filename: name of file
 * @letters: the number of length of text
 * Return: ssize_t structure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, len;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(letters + 1);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
	{
		return (0);
	}

	len = read(fd, buf, letters);
	if (len < 1)
	{
		return (0);
	}

	i = write(STDOUT_FILENO, buf, len);
	if (i < 0)
	{
		return (0);
	}
	close(fd);

	return (i);
}
