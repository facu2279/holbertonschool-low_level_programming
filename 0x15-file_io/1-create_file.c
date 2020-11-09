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
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	i = length_(text_content);
	text_content[i + 1] = '\0';
	write(fd, text_content, i);

	close(fd);
	return (1);
}
