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

	buf = malloc(letters + 1);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
	{
		return(1);
	}

	len = read(fd, buf, letters);

	i = write(1, buf, len);

	close(fd);

	return(i);
}
