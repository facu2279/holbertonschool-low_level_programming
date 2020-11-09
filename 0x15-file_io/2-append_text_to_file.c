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
 * append_text_to_file - add text_content to file in the end
 * @filename: name of file
 * @text_content: content of a file
 * Return: 1 on success, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (text_content == NULL)
	{
		fd = open(filename, O_APPEND | O_WRONLY, 0600);
		return (1);
		close(fd);
	}

	if (filename == NULL)
	{
		return (-1);
	}

	len = length_(text_content);

	fd = open(filename, O_APPEND | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	write(fd, text_content, len);

	close(fd);

	return (1);
}
