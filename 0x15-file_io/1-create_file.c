#include "holberton.h"
/**
 * length_ - length of a string
 * @string: string received
 * Return: return length of a string
 */
int length_(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * create_file - create a new file
 * @filename: name for file
 * @text_content: content of file
 * Return: 1 succes, -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
		return (1);
		close(fd);
	}

	if (filename == NULL)
	{
		return (-1);
	}

	len = length_(text_content);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	write(fd, text_content, len);

	close(fd);

	return (1);
}
