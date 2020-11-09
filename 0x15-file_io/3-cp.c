#include "holberton.h"
/**
 * main - copy the content of a file to another file
 * Return: return from 97 to 100 depend of result
 */
int main(int ac, char **av)
{

	int fd, i, len;
	char *buf;

	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
/* read and save on buf*/


	fd = open(av[0], O_RDONLY, 0600);

	if (fd == -1)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	buf = malloc(fd + 1
/* */
}
